//
// Created by jonathan on 9/7/18.
//

#ifndef PATRONES_MODOOBSERVADOR_H
#define PATRONES_MODOOBSERVADOR_H

#include "Observador.h"


class ModoObservador: public Oservador{

        public:
        ModoObservador(Subjeto *mod, int div): Observador(mod, div){}




    void update() {
            int v = getSubject()->getVal(), d = getDivisor();
            cout << v << " mod " << d << " is " << v % d << '\n';
        }
};


#endif //PATRONES_MODOOBSERVADOR_H
