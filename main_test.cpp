#include<iostream>
#include"charstack.h"

using std::cout;
using std::endl;


int main()
{
    CharStack stack;
    stack.push('a');
    stack.push('b');
    stack.push('c');
    cout << "size: " << stack.size() << endl;
    cout << "peeking: " << stack.peek() << endl;
    cout << stack.pop() << " | should be c" << endl;
    cout << "size: " << stack.size() << endl;
    cout << "peeking: " << stack.peek() << endl;
    stack.clear();
    cout << "stack size after clearing: " << stack.size() << std::endl;


    return 0;
}