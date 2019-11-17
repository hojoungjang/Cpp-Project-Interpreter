//
// Created by yul hee cho on 02/11/2019.
//

#include "prints.h"
#include <iostream>
using namespace std;

Prints::Prints(){

}

Prints::~Prints(){

}

int Prints::execute(Interpreter &interpreter) {
    short display = interpreter.rstacks[interpreter.sp--]->getShort();

    std::cout << display << std::endl;

    return 1;
}