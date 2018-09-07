#include "DellBuilderPC.h"
#include <string>
#include <memory>
#include "PC.h"
#include "PC_Builder.h"
#include <iostream>
using namespace std;

DellBuilderPC::DellBuilderPC()
{
    //ctor
}

//Definicion de metodos
void DellBuilderPC::buildOS(){

    c_PC -> setOS("Intel i7");
}

void DellBuilderPC::buildRAM(){
    c_PC -> setRAM("16GB DDR4");
}

void DellBuilderPC::buildGPU(){
    c_PC -> setGPU("NVIDIA GFORCE GTX 1080ti");
}





DellBuilderPC::~DellBuilderPC()
{
    //dtor
}
