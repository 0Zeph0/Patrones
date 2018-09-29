#include "MakePC.h"
#include <string>
#include <memory>
#include "PC.h"
#include "PC_Builder.h"
#include "DellBuilderPC.h"
#include "MSIBuilderPC.h"
#include <iostream>
using namespace std;

MakePC::MakePC()
{
    //ctor
}

void MakePC::showPC(){
    make_pc_builder ->getPC()->Show();
}

void MakePC::BuildPC(PC_Builder* pz){

    make_pc_builder = pz;//make_pc_builder apunta a lo que apunta pz, ya que pz recibe una direccion
    make_pc_builder ->createNewPC();
    make_pc_builder ->buildOS();
    make_pc_builder ->buildRAM();
    make_pc_builder ->buildGPU();
}

MakePC::~MakePC()
{
    //dtor
}
