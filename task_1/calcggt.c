#include "ggt.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int zahl = 33;
    int andere_zahl = 7;
    int result = ggt(zahl, andere_zahl);
    printf("der ggt von %d und %d ist %d",zahl, andere_zahl, result);
    return 0;
}
