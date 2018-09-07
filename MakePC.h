#ifndef MAKEPC_H
#define MAKEPC_H
#include <string>
#include <memory>
#include "PC.h"
#include "PC_Builder.h"
#include "DellBuilderPC.h"
#include "MSIBuilderPC.h"
#include <iostream>
using namespace std;

//Director.h
class MakePC : PC_Builder
{
    public:
        MakePC();
        virtual ~MakePC();
        //metodos
        void showPC();
        void BuildPC(PC_Builder*);

    protected:
        PC_Builder* make_pc_builder;

    private:

};

#endif // MAKEPC_H
