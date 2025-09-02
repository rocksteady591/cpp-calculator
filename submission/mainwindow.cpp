#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->l_result->setText("0");
    ui->l_memory->setText("");
    ui->l_formula->setText("");
    input_number_.clear();
    active_number_ = 0.0;
    current_operation_ = Operation::NO_OPERATION;
    calculator_.Set(0.0);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::AddText(const QString& suffix){
    input_number_ += suffix;
    SetText(input_number_);
}

void MainWindow::SetText(const QString& text){
    input_number_ = text;
    input_number_ = NormalizeNumber(input_number_);
    ui->l_result->setText(input_number_);
}

void MainWindow::on_pb_one_clicked(){ AddText("1"); }
void MainWindow::on_pb_two_clicked(){ AddText("2"); }
void MainWindow::on_pb_three_clicked(){ AddText("3"); }
void MainWindow::on_pb_four_clicked(){ AddText("4"); }
void MainWindow::on_pb_five_clicked(){ AddText("5"); }
void MainWindow::on_pb_six_clicked(){ AddText("6"); }
void MainWindow::on_pb_seven_clicked(){ AddText("7"); }
void MainWindow::on_pb_eight_clicked(){ AddText("8"); }
void MainWindow::on_pb_nine_clicked(){ AddText("9"); }
void MainWindow::on_pb_zero_clicked(){ AddText("0"); }

void MainWindow::on_pb_dot_clicked(){
    if(!input_number_.contains(".")){
        AddText(".");
    }
}

void MainWindow::on_pb_delete_clicked(){
    input_number_.chop(1);
    SetText(input_number_);
    active_number_ = input_number_.toDouble();
}

QString MainWindow::RemoveTrailingZeroes(const QString &text) {
    for (qsizetype i = 0; i < text.size(); ++i) {
        if (text[i] != '0') {
            return text.mid(i);
        }
    }
    return "";
}

QString MainWindow::NormalizeNumber(const QString &text) {
    if (text.isEmpty()) return "0";
    if (text == "-") return "-";
    if (text.startsWith('.')) return NormalizeNumber("0" + text);
    if (text.startsWith('-')) return "-" + NormalizeNumber(text.mid(1));
    if (text.startsWith('0') && !text.startsWith("0.")) {
        return NormalizeNumber(RemoveTrailingZeroes(text));
    }
    return text;
}

void MainWindow::SetOperation(Operation op) {
    if (current_operation_ == Operation::NO_OPERATION) {
        const QString src = input_number_.isEmpty() ? ui->l_result->text() : input_number_;
        calculator_.Set(src.toDouble());
        input_number_.clear();
    }

    current_operation_ = op;
    ui->l_formula->setText(FormatDouble(calculator_.GetNumber()) + " " + OpToString(current_operation_));
}

void MainWindow::on_pb_add_clicked(){ SetOperation(Operation::ADDITION); }
void MainWindow::on_pb_substraction_clicked(){ SetOperation(Operation::SUBTRACTION); }
void MainWindow::on_pb_multiply_clicked(){ SetOperation(Operation::MULTIPLICATION); }
void MainWindow::on_pb_division_clicked(){ SetOperation(Operation::DIVISION); }
void MainWindow::on_pb_pow_clicked(){ SetOperation(Operation::POWER); }

QString MainWindow::OpToString(Operation op) {
    switch(op) {
    case Operation::NO_OPERATION: return "";
    case Operation::ADDITION: return "+";
    case Operation::DIVISION: return "÷";
    case Operation::MULTIPLICATION: return "×";
    case Operation::SUBTRACTION: return "−";
    case Operation::POWER: return "^";
    }
    return "";
}

void MainWindow::on_pb_clear_clicked(){
    ui->l_result->setText("0");
    ui->l_formula->setText("");
    input_number_.clear();
    active_number_ = 0;
    current_operation_ = Operation::NO_OPERATION;
}

void MainWindow::on_pb_change_of_sign_clicked() {
    if (input_number_.isEmpty()) {
        input_number_ = ui->l_result->text();
    }

    if (input_number_ == "0" || input_number_ == "-0") {
        return;
    }

    if (input_number_.startsWith("-")) {
        input_number_ = input_number_.mid(1);
    } else {
        input_number_ = "-" + input_number_;
    }
    SetText(input_number_);
}

void MainWindow::on_pb_result_clicked() {
    if (current_operation_ != Operation::NO_OPERATION) {
        Number rhs = 0.0;
        if (!input_number_.isEmpty()) {
            rhs = input_number_.toDouble();
        } else {
            rhs = ui->l_result->text().toDouble();
        }

        QString formula_rhs = input_number_.isEmpty() ? ui->l_result->text() : input_number_;
        QString formula = ui->l_formula->text() + " " + formula_rhs;

        switch (current_operation_) {
        case Operation::ADDITION:      calculator_.Add(rhs); break;
        case Operation::SUBTRACTION:   calculator_.Sub(rhs); break;
        case Operation::MULTIPLICATION:calculator_.Mul(rhs); break;
        case Operation::DIVISION:      calculator_.Div(rhs); break;
        case Operation::POWER:         calculator_.Pow(rhs); break;
        default: break;
        }
        active_number_ = calculator_.GetNumber();
        QString result = FormatDouble(active_number_);
        ui->l_result->setText(result);
        ui->l_formula->setText(formula + " =");
        input_number_ = result;
        current_operation_ = Operation::NO_OPERATION;
    }
}

void MainWindow::on_pb_save_number_clicked() {
    if (!input_number_.isEmpty()) {
        calculator_.Set(input_number_.toDouble());
    }

    calculator_.Save();
    ui->l_memory->setText("M");
}

void MainWindow::on_pb_memory_clear_clicked() {
    calculator_.ClearMemory();
    ui->l_memory->clear();
}

void MainWindow::on_pb_memory_read_clicked() {
    if (calculator_.HasMem()) {
        calculator_.Load();
        active_number_ = calculator_.GetNumber();
        QString result = FormatDouble(active_number_);
        input_number_ = result;
        ui->l_result->setText(result);
    }
}

QString MainWindow::FormatDouble(Number v) {
    return QString::number(v, 'g', 15);
}
