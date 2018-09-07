#include "PC.h"
#include <string>
#include <memory>
#include <iostream>
using namespace std;
//Product.cpp
PC::PC()
{
    //ctor
}
//Setters
void PC::setOS(const string& OS){
    _OS = OS;
}

void PC::setRAM(const string& RAM){
    _RAM = RAM;
}

void PC::setGPU(const string& GPU){
    _GPU = GPU;
}

void PC::Show(){
    cout << "OS: "<< _OS << "RAM: " << _RAM << "GPU: " << _GPU << endl;
}

PC::~PC()
{
    //dtor
}
