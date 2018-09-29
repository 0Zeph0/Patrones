#ifndef DELLBUILDERPC_H
#define DELLBUILDERPC_H
#include <string>
#include <memory>
#include "PC.h"
#include "PC_Builder.h"
#include <iostream>
using namespace std;

//Concrete Builder
class DellBuilderPC : public PC_Builder
{
    public:
        DellBuilderPC();
        virtual ~DellBuilderPC();
        //Metodos
        virtual void buildOS();
        virtual void buildRAM();
        virtual void buildGPU();

    protected:

    private:
};

#endif // DELLBUILDERPC_H
