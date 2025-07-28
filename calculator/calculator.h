#pragma once
#include <string>
using Number = double;
// Возвращает true, если удалось прочитать число
// и сохранить его в Number.
bool ReadNumber(Number& result);
//Проверяет корректность введенной операции
//возвращает true если такая операция есть и false если нет
bool IsCorrectOperation(std::string& operation);
//считывает операцию с консоли и передает ее в IsCorrectOperation
bool ReadOperation(std::string& operation);
// Возвращает true, если работа завершилась штатно 
// командой q. Если из-за ошибки, возвращает false.
bool RunCalculatorCycle(); 