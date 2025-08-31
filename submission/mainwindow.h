#pragma once

#include "calculator.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum class Operation{
    NO_OPERATION,
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    POWER
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    void SetText(const QString& text);
    void AddText(const QString& suffix);
    QString RemoveTrailingZeroes(const QString &text);
    QString NormalizeNumber(const QString &text);
    void SetOperation(Operation op);
    QString OpToString(Operation op);
    static QString FormatDouble(double v);

private slots:

    void on_pb_one_clicked();

    void on_pb_two_clicked();

    void on_pb_three_clicked();

    void on_pb_four_clicked();

    void on_pb_five_clicked();

    void on_pb_six_clicked();

    void on_pb_seven_clicked();

    void on_pb_eight_clicked();

    void on_pb_nine_clicked();

    void on_pb_zero_clicked();

    void on_pb_dot_clicked();

    void on_pb_delete_clicked();

    void on_pb_add_clicked();

    void on_pb_substraction_clicked();

    void on_pb_multiply_clicked();

    void on_pb_division_clicked();

    void on_pb_pow_clicked();

    void on_pb_clear_clicked();

    void on_pb_change_of_sign_clicked();

    void on_pb_result_clicked();

    void on_pb_save_number_clicked();

    void on_pb_memory_clear_clicked();

    void on_pb_memory_read_clicked();

private:
    Ui::MainWindow* ui;
    Calculator calculator_;
    QString input_number_;
    double active_number_;
    Operation current_operation_ = Operation::NO_OPERATION;
};

