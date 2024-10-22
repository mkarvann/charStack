#include<iostream>
#include<vector>
#include "charstack.h"


// do the other

void CharStack::push(char ch){
    this->stack->push_back(ch);
    return;
}

char CharStack::pop(){
    char thisChar = this->stack->at(this->size() - 1);
    this->stack->pop_back();
    return thisChar;
}

char CharStack::peek(){
    return this->stack->at(this->size() - 1);
}