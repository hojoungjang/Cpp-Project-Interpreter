//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_POKEF_H
#define CPPPROJECTINTERPRETER_POKEF_H

#include "bytecode.h"

class Pokef : public Bytecode{
public:
    Pokef();
    virtual ~Pokef();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_POKEF_H
