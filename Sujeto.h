//
// Created by jonathan on 9/7/18.
//

#ifndef PATRONES_SUJETO_H
#define PATRONES_SUJETO_H
#include <iostream>
#include <vector>
#include "Observador.h"

using namespace std;


class Sujeto {
    // 1. clase independiente
    vector < class Observador * > views; // 3. Acoplado unicamente a la 'interfaz'
    int value;
public:
    void attach(Observador* obs) {
        views.push_back(obs);
    }
    void setVal(int val) {
        value = val;
        notify();
    }
    int getVal() {
        return value;
    }





    void notify(){
         {
            for (int i = 0; i < views.size(); i++)
                views[i]->update();
        }
    }


};




#endif //PATRONES_SUJETO_H
