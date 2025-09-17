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
    void SetDigitKeyCallback(std::function<void(int key)> cb){
        digit_callback_ = std::move(cb);
    }

    void SetProcessOperationKeyCallback(std::function<void(Operation key)> cb){
        operation_callback_ = cb;
    }

    void SetProcessControlKeyCallback(std::function<void(ControlKey key)> cb){
        control_key_callback_ = cb;
    }

    void SetControllerCallback(std::function<void(ControllerType controller)> cb){
        controller_type_callback_ = cb;
    }


private slots:

    void on_pb_one_clicked()
    {
        digit_callback_(1);
    }


    void on_pb_two_clicked()
    {
        digit_callback_(2);
    }


    void on_pb_three_clicked()
    {
        digit_callback_(3);
    }


    void on_pb_four_clicked()
    {
        digit_callback_(4);
    }


    void on_pb_five_clicked()
    {
        digit_callback_(5);
    }


    void on_pb_six_clicked()
    {
        digit_callback_(6);
    }


    void on_pb_seven_clicked()
    {
        digit_callback_(7);
    }


    void on_pb_eight_clicked()
    {
        digit_callback_(8);
    }


    void on_pb_nine_clicked()
    {
        digit_callback_(9);
    }


    void on_pb_zero_clicked()
    {
        digit_callback_(0);
    }


    void on_tb_extra_clicked()
    {
        control_key_callback_(ControlKey::EXTRA_KEY);
    }


    void on_pb_delete_clicked()
    {
        control_key_callback_(ControlKey::BACKSPACE);
    }


    void on_pb_result_clicked()
    {
        control_key_callback_(ControlKey::EQUALS);
    }


    void on_pb_add_clicked()
    {
        operation_callback_(Operation::ADDITION);
    }


    void on_pb_substraction_clicked()
    {
        operation_callback_(Operation::SUBTRACTION);
    }


    void on_pb_multiply_clicked()
    {
        operation_callback_(Operation::MULTIPLICATION);
    }


    void on_pb_division_clicked()
    {
        operation_callback_(Operation::DIVISION);
    }


    void on_pb_change_of_sign_clicked()
    {
        control_key_callback_(ControlKey::PLUS_MINUS);
    }


    void on_pb_clear_clicked()
    {
        control_key_callback_(ControlKey::CLEAR);
    }


    void on_pb_pow_clicked()
    {
        operation_callback_(Operation::POWER);
    }


    void on_pb_save_number_clicked()
    {
        control_key_callback_(ControlKey::MEM_SAVE);
    }


    void on_pb_memory_read_clicked()
    {
        control_key_callback_(ControlKey::MEM_LOAD);
    }

    void on_pb_memory_clear_clicked()
    {
        control_key_callback_(ControlKey::MEM_CLEAR);
    }

    void on_cmb_controller_currentIndexChanged(int);

private:
    Ui::MainWindow *ui;
    std::function<void(int)> digit_callback_;
    std::function<void(Operation)> operation_callback_;
    std::function<void(ControlKey)> control_key_callback_;
    std::function<void(ControllerType)> controller_type_callback_;
};
