//
// Created by hichem on 2018-10-08.
//

#ifndef UNTITLED1_MYCHAINEDSTACK_H
#define UNTITLED1_MYCHAINEDSTACK_H
#include "mystack.h"




class Mychainedstack : public Mystack {

private:
    struct element {
        int val;
        element* next;

    };

    element *stack;

public:

     Mychainedstack();

    void push(int number);

    int pop(void);

    int operator%(int mod)const ;

    void clear();

#endif //UNTITLED1_MYCHAINEDSTACK_H
};