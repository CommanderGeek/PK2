#include "Medium.h"
#include<string>
int Medium::running_id = 0;
Medium::Medium(std::string titel, int jahr) : titel{titel}, jahr {jahr}, id{running_id++}{
};

int Medium::alter(){
    return 2023-get_jahr();
}