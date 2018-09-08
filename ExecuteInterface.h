//
// Created by jonathan on 9/7/18.
//

#ifndef PATTERN_EXECUTEINTERFACE_H
#define PATTERN_EXECUTEINTERFACE_H

#include "ExecuteAdapter.h"

class ExecuteInterface {
public:

    virtual ~ ExecuteInterface ()
    {

    }
    virtual void execute () = 0;

};


#endif //PATTERN_EXECUTEINTERFACE_H
