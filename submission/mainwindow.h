#pragma once

#include "enums.h"

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    void SetInputText(const std::string& text);
    void SetErrorText(const std::string& text);
    void SetFormulaText(const std::string& text);
    void SetMemText(const std::string& text);
    void SetExtraKey(const std::optional<std::string>& key);
    void SetDigitKeyCallback(std::function<void(int key)> cb);
    void SetProcessOperationKeyCallback(std::function<void(Operation key)> cb);
    void SetProcessControlKeyCallback(std::function<void(ControlKey key)> cb);
    void SetControllerCallback(std::function<void(ControllerType controller)> cb);


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


    void on_tb_extra_clicked();


    void on_pb_delete_clicked();


    void on_pb_result_clicked();


    void on_pb_add_clicked();


    void on_pb_substraction_clicked();


    void on_pb_multiply_clicked();


    void on_pb_division_clicked();


    void on_pb_change_of_sign_clicked();


    void on_pb_clear_clicked();


    void on_pb_pow_clicked();


    void on_pb_save_number_clicked();


    void on_pb_memory_read_clicked();

    void on_pb_memory_clear_clicked();

    void on_cmb_controller_currentIndexChanged(int);

private:
    Ui::MainWindow *ui;
    std::function<void(int)> digit_callback_;
    std::function<void(Operation)> operation_callback_;
    std::function<void(ControlKey)> control_key_callback_;
    std::function<void(ControllerType)> controller_type_callback_;
};
