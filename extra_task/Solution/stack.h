#include "emptyStackException.h"
#include <iostream>
template<class T>
class stack{
    private:
    typedef struct element{
        T value;
        element *next;
    };
    element *top;
    public:
    stack();
    ~stack();
    void push(T value);
    T pop();
};

template<class T>
stack<T>::~stack(){
    while(pop() != -1){
    }
}
template<class T>
stack<T>::stack() : top{nullptr}
{
}
template<class T>
void stack<T>::push(T value)
{
    element *neu = new element();
    if (neu != nullptr)
    {
        neu->value = value;
        neu->next = top;
        top = neu;
    }

}
template<class T>
T stack<T>::pop(){
      if(top != nullptr){
        element *tmp = top;
        top = top->next;
        int value = tmp->value;
        delete(tmp);
        return value;
    }
    return -1;
}





