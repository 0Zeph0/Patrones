//
// Created by jonathan on 9/7/18.
//

include <iostream>
#include "adapter/Herramienta.h"



using namespace std;


typedef ExecuteInterface **objeto= Inicializar();

int main() {

    objeto;
    for (int i = 0; i < 3; i++)
    {
        objeto[i]->execute ();
    }

    return 0;
}