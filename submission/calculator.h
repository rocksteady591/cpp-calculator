#pragma once
#include <string>
#include <utility>

using Number = double;

class Calculator {
public:
    void Set(Number n);
    Number GetNumber() const;
    void Add(Number n);
    void Sub(Number n);
    void Div(Number n);
    void Mul(Number n);
    void Pow(Number n);
    void ClearMemory();
    void Save();
    void Load();
    bool HasMem() const;
    std::string GetNumberRepr() const;
private:
    std::string operation_;
    Number number_ = 0;
    std::pair<Number, bool> memory_{ 0, false };
};
