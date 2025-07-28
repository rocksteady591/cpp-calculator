#include "calculator.h"

int main(){
    bool result = RunCalculatorCycle();
    if(result){
        return 0;
    }else{
        return -1;
    }
}