//
// Created by jonathan on 9/7/18.
//

#ifndef PATRONES_OBSERVADOR_H
#define PATRONES_OBSERVADOR_H

#include "Sujeto.h"

class Observador {

    // 2. clase dependiente
    Subjeto * model;
    int denom;
public:
    Observador(Subjeto* mod, int div) {
        model = mod;
        denom = div;
        // 4. Observers se registran con el Subject
        model->attach(this);
    }
    virtual void update() = 0;


protected:
    Subjeto * getSubject() {
        return model;
    }
    int getDivisor() {
        return denom;
    }

};


#endif //PATRONES_OBSERVADOR_H
