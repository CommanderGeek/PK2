#include <stdio.h>
int count_space_index(char s[]){
    int counter = 0;
    int i;
    for(i=0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            counter++;
        }
    }
    return counter;
}

int count_space(char s[]){
    int counter = 0;
    char *pointer = &s[0];
    while((*pointer) != '\0'){
        if((*pointer) == ' '){
            counter++;
        }
        pointer = (pointer+1);
    }
    return counter;
}