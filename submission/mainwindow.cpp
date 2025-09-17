#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

}
MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::SetInputText(const std::string& text) {
    ui->l_result->setStyleSheet("");
    ui->l_result->setText(QString::fromStdString(text));
}

void MainWindow::SetErrorText(const std::string& text) {
    ui->l_result->setStyleSheet("color: #ff0000;");
    ui->l_result->setText(QString::fromStdString(text));
}

void MainWindow::SetFormulaText(const std::string& text){
    ui->l_formula->setText(QString::fromStdString(text));
}

void MainWindow::SetMemText(const std::string& text){
    ui->l_memory->setText((QString::fromStdString(text)));
}

void MainWindow::SetExtraKey(const std::optional<std::string>& key) {
    if (key.has_value()) {
        ui->tb_extra->setText(QString::fromStdString(key.value()));
        ui->tb_extra->setVisible(true);
    } else {
        ui->tb_extra->setVisible(false);
    }
}

void MainWindow::on_cmb_controller_currentIndexChanged(int index)
{
    if (!controller_type_callback_) {
        return;
    }

    const auto& controller_name = ui->cmb_controller->currentText();
    if (controller_name == "double") {
        controller_type_callback_(ControllerType::DOUBLE);
    } else if (controller_name == "float") {
        controller_type_callback_(ControllerType::FLOAT);
    } else if (controller_name == "int") {
        controller_type_callback_(ControllerType::INT);
    } else if (controller_name == "int64_t") {
        controller_type_callback_(ControllerType::INT64_T);
    } else if (controller_name == "size_t") {
        controller_type_callback_(ControllerType::SIZE_T);
    } else if (controller_name == "uint8_t") {
        controller_type_callback_(ControllerType::UINT8_T);
    } else if (controller_name == "Rational") {
        controller_type_callback_(ControllerType::RATIONAL);
    }

}

