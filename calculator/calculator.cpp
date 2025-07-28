#include "calculator.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using Number = double;

std::vector<char> OPERATIONS {'+', '-', '*', '/', '=', ':', 'c', 'q', 's', 'l'};
std::pair<bool, Number> MEMORY {false, 0};

bool ReadNumber(Number& result){
    std::cin >> result;
    if(std::cin.fail()){
        std::cerr << "Error: Numeric operand expected";
        return false;
    }
    return true;
}

bool IsCorrectOperation(std::string& operation){
    if(operation.size() == 2 && operation == "**"){
        return true;
    }else if(operation.size() == 1){
        for(int i = 0; i < OPERATIONS.size(); i++){
            if(operation[0] == OPERATIONS[i]){
                return true;
            }
        }
    }
    return false;
}

bool ReadOperation(std::string& operation){
    std::cin >> operation;
    if(!IsCorrectOperation(operation)){
        return false;
    }
    return true;
}

bool RunCalculatorCycle(){
    Number number = 0;//самое первое число которое подается на ввод
    std::string operation;//эта переменная используется и для ввода команд и для ввода
    if(!ReadNumber(number)){
        return false;
    }
    while(true){
        if(!ReadOperation(operation)){
            std::cerr << "Error: Unknown token " << operation;
            return false;
        }
        Number num = 0;
        if(operation == "+"){
            if(!ReadNumber(num)){
                return false;
            }
            number += num;
        }else if(operation == "-"){
            if(!ReadNumber(num)){
                return false;
            }
            number -= num;
        }else if(operation == "*"){
            if(!ReadNumber(num)){
                return false;
            }
            number *= num;
        }else if(operation == "**"){
            if(!ReadNumber(num)){
                return false;
            }
            number = std::pow(number, num);
        }else if(operation == "/"){
            if(!ReadNumber(num)){
                return false;
            }
            number /= num;
        }else if(operation == "="){
            std::cout << number << std::endl;
        }else if(operation == ":"){
            if(!ReadNumber(num)){
                return false;
            }
            number = num;
        }else if(operation == "c"){
            number = 0;
        }else if(operation == "q"){
            return true;
        }else if(operation == "s"){
            MEMORY = {true, number};
        }else if(operation == "l"){
            if(MEMORY.first == false){
                std::cerr << "Error: Memory is empty" << std::endl;
                return false;
            }else{
                number = MEMORY.second;
            }
        }
    }
}