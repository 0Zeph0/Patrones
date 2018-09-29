#ifndef PC_BUILDER_H
#define PC_BUILDER_H
#include <string>
#include <memory>
#include "PC.h"
#include <iostream>
using namespace std;
//Abstract Builder.h
class PC_Builder
{
    public:
        PC_Builder();
        virtual ~PC_Builder();
        /*Getter*/
        PC* getPC();
        //create new product(PC)
        void createNewPC();
        //Metodos polimorficos a usar por todos los concret builders
        virtual void buildOS();
        virtual void buildRAM();
        virtual void buildGPU();


    protected:
        PC* c_PC;

    private:

};

#endif // PC_BUILDER_H
