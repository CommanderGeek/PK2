#include "linkedlist.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}

LinkedList::~LinkedList() {
    element *pointer = head;
    while (pointer != nullptr) {
        element *die = pointer;
        pointer = pointer->next;
        delete die;
    }
}

LinkedList::LinkedList(const LinkedList &copyList) : LinkedList(){
    element *pointer = copyList.head;
    while(pointer != nullptr){
        this->append(pointer->value);
        pointer = pointer->next;
    }
}

int LinkedList::append(const char *text) {
    element *e = new element{text, nullptr}; 
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

int LinkedList::insert(const char *text, int p) {
    if (this->head == nullptr)
    {
        append(text);
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
                this->head = new element(text, buffer); 
                return 1;
            }else {
                pre_ptr->next = new element(text, buffer);
                 return 1;

            }

        }
    append(text);
    return 1;
}

const char *LinkedList::get(int p) {
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

int LinkedList::remove(int p) {
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
int LinkedList::index_of(const char *text){
    int index = 0;
    element *ptr = head;
    while(ptr != nullptr){
        if (strcmp(ptr->value, text) == 0)
        {
            return index;
        }
        ptr = ptr->next;
    }
    return -1;
}

void LinkedList::visit_all(void (*work)(const char* t)){
    element *pointer = head;
    while(pointer != nullptr){
        work(pointer->value);
        pointer = pointer->next;
    }
}

const char *LinkedList::first(){
    return head->value;
}
const char *LinkedList::last(){
    return tail->value;
}