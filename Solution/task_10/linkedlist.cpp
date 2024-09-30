#include "linkedlist.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
template <class T>
fhdo_pk2::LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr) {}

using namespace fhdo_pk2;
template <class T>
LinkedList<T>::ListIterator::ListIterator(): current{nullptr}{
}

template <class T>
LinkedList<T>::ListIterator::ListIterator(const LinkedList &list): current{list.head}{}

template <class T>
bool LinkedList<T>::ListIterator::hasNext(){
    return current != nullptr;
};
template <class T>
T LinkedList<T>::ListIterator::next(){
    const char* s = current->value;
    current = current->next;
    return s;
}
template <class T>
LinkedList<T>::~LinkedList() {
    element *pointer = head;
    while (pointer != nullptr) {
        element *die = pointer;
        pointer = pointer->next;
        delete die;
    }
}
template <class T>
LinkedList<T>::LinkedList(const LinkedList &copyList) : LinkedList(){
    element *pointer = copyList.head;
    while(pointer != nullptr){
        this->append(pointer->value);
        pointer = pointer->next;
    }
}
template <class T>
int LinkedList<T>::append(T value) {
    element *e = new element{value, nullptr}; 
    if (e == nullptr) {
        return 0; 
    }

    if (head == nullptr) {
        head = e; 
    } else {
        tail->next = e;
    }
    tail = e; 
    return 1; 
}
template <class T>
int LinkedList<T>::insert(T value, int p){
    if (this->head == nullptr)
    {
        append(value);
        return -1;
    }
    element *ptr = this->head;
    element *pre_ptr = nullptr;
    int current = 0;
    while (ptr != nullptr && current <= p)
    {

        current++;
        pre_ptr = ptr;
        ptr = ptr->next;
    }
            if (current == p)
        {
            element *buffer = ptr; 
            if(p == 0){ 
                this->head = new element(value, buffer); 
                return 1;
            }else {
                pre_ptr->next = new element(value, buffer);
                 return 1;

            }

        }
    append(value);
    return 1;
}
template <class T>
T LinkedList<T>::get(int p) {
    int count = 0;
    element *pointer = head;

    while (pointer != nullptr && count < p) {
        pointer = pointer->next;
        count++;
    }

    if (pointer != nullptr) {
        return pointer->value;
    } else {
        return "nichts da"; 
    }
}
template <class T>
int LinkedList<T>::remove(int p) {
    if (head == nullptr || p < 0) {
        return 0; 
    }

    if (p == 0) {
        element *e = head;
        head = head->next;
        delete e;
        if (head == nullptr) {
            tail = nullptr; 
        }
        return 1; 
    }

    int counter = 0;
    element *pointer = head;
    element *pre = nullptr;

    while (pointer != nullptr && counter < p) {
        pre = pointer;
        pointer = pointer->next;
        counter++;
    }

    if (pointer != nullptr) {
        pre->next = pointer->next;
        if (tail == pointer) {
            tail = pre; 
        }
        delete pointer;
        return 1; 
    }

    return 0; 
}
template <class T>
int LinkedList<T>::index_of(T value){
    int index = 0;
    element *ptr = head;
    while(ptr != nullptr){
        if (ptr->value == value)
        {
            return index;
        }
        ptr = ptr->next;
    }
    return -1;
}
template <class T>
void LinkedList<T>::visit_all(void (*work)(T value)){
    //element *pointer = head;
   // while(pointer != nullptr){
    //    work(pointer->value);
    //    pointer = pointer->next;
   // }
   LinkedList::ListIterator *iter = this->iterator();
   while(iter->hasNext()){
    work(iter->next());
   }
}
template <class T>
T LinkedList<T>::first(){
    return head->value;
}
template <class T>
T LinkedList<T>::last(){
    return tail->value;
}
template <class T>
LinkedList<T>::ListIterator* LinkedList<T>::iterator(){
    ListIterator* iter = new ListIterator(*this);
    return  iter;
}