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
    if (p < 0) {
        return 0; 
    }

    element *e = new element{text, nullptr};
    if (e == nullptr) {
        return 0; 
    }

    if (p == 0) {
        e->next = head;
        head = e; 
        if (tail == nullptr) {
            tail = e; 
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

    if (pointer == nullptr && counter == p) {
        tail->next = e; 
        tail = e; 
        return 1; 
    }

    if (pointer != nullptr) {
        e->next = pointer;
        if (pre != nullptr) {
            pre->next = e; 
        } else {
            head = e; 
        }
        return 1; 
    }

    delete e; 
    return 0;
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