#include <stdio.h>
void print_ascii(int s){
    int i;
    int count = s;
    for(i = 32; i < 127; i++, count--){
        printf("%d %c ", i, (char) i);
        if(count <= 0){
            printf("\n");
            count = s;
        }
    }
}