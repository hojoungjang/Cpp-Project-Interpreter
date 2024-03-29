//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_RET_H
#define CPPPROJECTINTERPRETER_RET_H

#include "bytecode.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Ret : public Bytecode{
public:
    Ret();
    virtual ~Ret();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_RET_H
