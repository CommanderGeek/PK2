#include "stack.h"
#include <iostream>
int main(int argc, char const *argv[])
{

    stack<double> *s = new stack<double>();
    for(int i=0; i<100;i++){
        double value = static_cast<double> (i);
       s->push(i);
    }
    for(int i=0; i < 100; i++){
        std::cout << s->pop() << std::endl;
    }
    return 0;
}
