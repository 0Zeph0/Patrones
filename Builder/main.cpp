#include <string>
#include <memory>
#include "PC.h"
#include "PC_Builder.h"
#include "DellBuilderPC.h"
#include "MSIBuilderPC.h"
#include "MakePC.h"
#include <iostream>
using namespace std;


int main()
{
    MakePC compu;

    DellBuilderPC compuDELL;
    MSIBuilderPC compuMSI;

    compu.BuildPC(&compuDELL);
    compu.showPC();

    compu.BuildPC(&compuMSI);
    compu.showPC();

    return 0;
}
