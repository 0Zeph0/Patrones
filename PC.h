#ifndef PC_H
#define PC_H
#include <string>
#include <iostream>
using namespace std;
//Product.h

class PC
{
    public:
        PC();
        virtual ~PC();
        //Setters
        void setOS(const string& OS);
        void setRAM(const string& RAM);
        void setGPU(const string& GPU);
        //show specs
        void Show();

    protected:
    private:
        string _OS;
        string _RAM;
        string _GPU;

};

#endif // PC_H
