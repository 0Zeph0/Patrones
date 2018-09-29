#include "MSIBuilderPC.h"
#include <string>
#include <memory>
#include "PC.h"
#include "PC_Builder.h"
#include <iostream>
using namespace std;

MSIBuilderPC::MSIBuilderPC()
{
    //ctor
}

//Definicion de metodos
void MSIBuilderPC::buildOS(){

    c_PC -> setOS("Intel i7");
}

void MSIBuilderPC::buildRAM(){
    c_PC -> setRAM("32GB DDR4");
}

void MSIBuilderPC::buildGPU(){
    c_PC -> setGPU("NVIDIA RTX 2080");
}

MSIBuilderPC::~MSIBuilderPC()
{
    //dtor
}
