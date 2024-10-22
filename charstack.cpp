#include<iostream>
#include<vector>
#include "charstack.h"



CharStack::CharStack() 
{
    stack = new std::vector<char>(); 
}


CharStack::~CharStack() 
{
    delete stack; 
}


int CharStack::size()
{
    return stack->size();
}


bool CharStack::isEmpty() 
{
    return stack->empty();
}


void CharStack::clear() 
{
    stack->clear();
}

void CharStack::push(char ch)
{
    this->stack->push_back(ch);
    return;
}

char CharStack::pop()
{
    char thisChar = this->stack->at(this->size() - 1);
    this->stack->pop_back();
    return thisChar;
}

char CharStack::peek()
{
    return this->stack->at(this->size() - 1);
}