#include<iostream>
#include"charstack.h"

using std::cout;
using std::endl;


int main(){
    CharStack stack;
    stack.push('a');
    stack.push('b');
    cout << stack.pop() << " | should be b" << endl;
    cout << "size (1): " << stack.size() << endl;
    cout << "peeking: " << stack.peek() << endl;


    return 0;
}