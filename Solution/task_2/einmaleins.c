#include "einmaleins.h"
#include <stdio.h>
void printEinmalEins(int von, int bis){
    int i, j;
    for(i = 1; i < 11; i++){
        for(j = von; j <= bis; j++){
            int erg = i*j;
            printf("%3d ", erg);
        }
        printf("\n");
    }
}

void einmaleins(){
    printf("geben sie eine Zahl ein! \n");
    int von;
    scanf("%d", &von);
    printf("geben sie die Grenze des Einmal eins ein! \n");
    int bis;
    scanf("%d", &bis);
    printEinmalEins(von, bis);
}