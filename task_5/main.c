#include "dictionary.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for(i = 1; i <= 4 * 2; i++){
        printf("%d\n", insert(i));
    }for(i = 1; i <= 4; i++){
    printf("%d\n", member(i));
    }for(i = 4+1; i <= 4*2; i++){
        printf("%d", erase(i));
    }
    for(i = 1; i <= 2*4; i++){
    printf("%d", member(i));
    }
printf("\n");

    return 0;
}
