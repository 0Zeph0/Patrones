//
// Created by jonathan on 9/7/18.
//

#ifndef PATRONES_SUBOSERVADOR_H
#define PATRONES_SUBOSERVADOR_H

#include "Observador.h"
#include "Sujeto.h"

class SubOservador: public Observador{


    public:
        SubOservador(Subjeto* mod, int div): Observador(mod, div){}
        void update() {
            // 6. Se toma la informacion de interes para el Observer
            int v = getSubject()->getVal(), d = getDivisor();

            cout << v << " div " << d << " is " << v / d << '\n'; //Se realiza la operacion correspondiente con la info.
        }
    };


};


#endif //PATRONES_SUBOSERVADOR_H
