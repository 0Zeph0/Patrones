//
// Created by jonathan on 9/7/18.
//

#ifndef PATTERN_HERRAMIENTA_H
#define PATTERN_HERRAMIENTA_H

#include "ExecuteInterface.h"
#include "Tornillo.h"
#include "Llave.h"
#include "Alicate.h"

class Herramienta {
public:
    ExecuteInterface ** Inicializar ()(){

        ExecuteInterface **array = new ExecuteInterface *[3];


        array[0] = new ExecuteAdapter < Tornillo > (new Tornillo (), &Tornillo::FuncionTornillo);
        array[1] = new ExecuteAdapter < Llave > (new Llave (), &Llave::FuncionLlave);
        array[2] = new ExecuteAdapter < Alicate> (new Alicate(), &Alicate::FuncionAlicate);

        return array;
    }




};


#endif //PATTERN_HERRAMIENTA_H
