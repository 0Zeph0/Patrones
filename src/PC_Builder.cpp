#include "PC_Builder.h"
#include "PC.h"
#include <string>
#include <memory>
#include <iostream>
PC_Builder::PC_Builder()
{
    //ctor
}

//getter
PC* PC_Builder::getPC(){
    return c_PC;
}
void PC_Builder::createNewPC(){
    c_PC = new PC();
}
//solo se establecen ya que estos metodos son polimorfismo y seran usados por las clases concretas.
void PC_Builder::buildOS(){}
void PC_Builder::buildRAM(){}
void PC_Builder::buildGPU(){}



//dtor
PC_Builder::~PC_Builder(){}
