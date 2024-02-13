#include <stdio.h>
void to_binary(int zahl){
    if(zahl > 1){
        to_binary(zahl / 2);
    }
    printf("%d", zahl % 2);
}