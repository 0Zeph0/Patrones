//
// Created by jonathan on 3/7/18.
//

#include "Sujeto.h"
#include "SubOservador.h"
#include "ModoObservador.h"
 int  main(){


        Subjeto subj;
       SubOservador divObs1(&subj, 4); //  el cliente elige  el numero de observadores  y cualres seran los tipos  que  va a crear. El cliente configura el numero y
       SubOservador divObs2(&subj, 3); //    ipo de los Observers
        ModoObservador modObs3(&subj, 3);

     // /  si se  crean cambios  de Sujeto,  en la clase observador   Cualquier cambio a el subject se notifica los Objetos  que se hayan creado y este los actualiza y
        subj.setVal(14);


}
