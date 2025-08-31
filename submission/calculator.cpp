#include "calculator.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

const std::vector<char> OPERATIONS{ '+', '-', '*', '/', '=', ':', 'c', 'q', 's', 'l' };

void Calculator::Set(Number n) {
    number_ = n;
}
Number  Calculator::GetNumber() const {
    return number_;
}
void Calculator::Add(Number n) {
    number_ += n;
}
void  Calculator::Sub(Number n) {
    number_ -= n;
}
void  Calculator::Div(Number n) {
    number_ /= n;
}
void  Calculator::Mul(Number n) {
    number_ *= n;
}
void  Calculator::Pow(Number n) {
    number_ = std::pow(number_, n);
}
void  Calculator::Save() {
    memory_ = { number_, true };
}

void  Calculator::ClearMemory() {
    memory_ = { 0, false };
}

void  Calculator::Load() {
    number_ = memory_.first;
}
bool  Calculator::HasMem() const {
    if (memory_.second == true) {
        return true;
    }
    return false;
}
std::string  Calculator::GetNumberRepr() const {
    return std::to_string(number_);
}
