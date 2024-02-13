#include <stdio.h>
char to_upper(char c){
    if(c > 96 && c < 123){
        return c-32;
    }else{
        return c;
    }
}