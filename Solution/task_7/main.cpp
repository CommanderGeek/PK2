#include "linkedlist.h"
#include <iostream>
#include <string>

void to_string (char const * text){
    printf("string is: %s \n", text);
}
int main(int argc, char const *argv[])
{
   LinkedList* list = new LinkedList();
    std::string test = "Hello";
    list->append(test.c_str());
    list->append("World");
    list->append("this");
    list->append("is");
    list->append("not");
    list->append("my");
    list->append("first");
    list->append("program");
    list->visit_all(to_string);
    return 0;
}
