#include <iostream>

using namespace std;

class Nave{
public:
    virtual void depegar();
};

class SerieTIE : public Nave{
public:
    SerieTIE();
    void despegar(){
    cout<< "TIE Imperial despegando \n"<< endl;}
};

class DesEstelar : public Nave{
public:
    DesEstelar();
    void despegar(){
    cout<< "Destructor Estelar clase Victoria I Imperial despegando \n"<< endl;}
};

class Inquisidor : public Nave{
public:
    Inquisidor();
    void despegar(){
    cout<< "Inquisidor Imperial despegando \n"<< endl;}
};

class T4A : public Nave{
public:
    T4A();
    void despegar() {
    cout<< "Nave T-4A clase Lambda Republica despegando \n"<< endl;}
};

class NU : public Nave{
public:
    NU();
    void despegar(){
    cout<< "Nave Ataque clase NU Republica despegando \n"<< endl;}
};

class CruceroEsp : public Nave{
public:
    void despegar(){
    cout<< "Crucero Spacial clase Consular Republica despegando \n"<< endl;}
};

class Factory{
public:
    virtual Nave *crearNaves(int num);
};

class RepublicFactory: public Factory{
public:
    Nave *crearNaves(int num){
        if(num==1){return new T4A;}
        else if (num == 2){return new NU;}
        else{return new CruceroEsp;}
    }

};

class ImperialFactory: public Factory{
public:
    Nave *crearNaves(int num){
        if(num==1){return new SerieTIE;}
        else if (num == 2){return new DesEstelar;}
        else{return new Inquisidor;}
    }

};
