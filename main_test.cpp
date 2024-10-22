#include<iostream>
#include"charstack.h"

using std::cout;
using std::endl;


int main()
{
    CharStack stack = CharStack();
    cout << "...created CharStack stack" << endl;
    cout << "... push('a'), push('b'), push('c')" << endl;
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.printStack();
    cout << "size: " << stack.size() << endl;
    cout << "peeking: " << stack.peek() << endl;

    cout << "\nLet's pop the last item off the stack" << endl;
    cout << "popped off " << stack.pop() << " | should be c" << endl;
    cout << "size: " << stack.size() << endl;
    cout << "peeking: " << stack.peek() << endl;
    stack.printStack();

    cout << "Let's clear the stack"  << endl;
    stack.clear();
    cout << "stack size after clearing: " << stack.size() << std::endl;
    stack.printStack();


    return 0;
}