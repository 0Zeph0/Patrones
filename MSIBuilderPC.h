#ifndef MSIBUILDERPC_H
#define MSIBUILDERPC_H
#include <string>
#include <memory>
#include "PC.h"
#include "PC_Builder.h"
#include <iostream>
using namespace std;

//Concrete Builder
class MSIBuilderPC : public PC_Builder
{
    public:
        MSIBuilderPC();
        virtual ~MSIBuilderPC();
        //metodos virtuales
        virtual void buildOS();
        virtual void buildRAM();
        virtual void buildGPU();

    protected:

    private:
};

#endif // MSIBUILDERPC_H
