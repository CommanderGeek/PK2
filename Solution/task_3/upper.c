#include "upper.h"
#include <stdio.h>
char to_upper(char c){
    if(c > 96 && c < 123){
        return c-32;
    }
    return c;
}
void upper(char text[]){
    int i = 0;
    while(text[i]){
        text[i++] = to_upper(text[i]);
    }
    printf("%s", text);
}