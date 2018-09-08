//
// Created by jonathan on 9/7/18.
//

#ifndef PATTERN_EXECUTEADAPTER_H
#define PATTERN_EXECUTEADAPTER_H



/******************************************************************************


*******************************************************************************/

#include <iostream>



using namespace std;


template < class TYPE > class ExecuteAdapter: public ExecuteInterface
{

public:
    ExecuteAdapter (TYPE * o, void (TYPE::*m) ()) {
        object = o;
        method = m;
    }
    ~ExecuteAdapter () {

        delete object;
    }

    void execute () {
        (object->*method) ();
    }


private:
    TYPE * object;

    void (TYPE::*method) ();
};

#endif //PATTERN_EXECUTEADAPTER_H
