#include "ascii.h"
#include "einmaleins.h"
#include "to_binary.h"
#include "to_upper.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
    //print_ascii(10);
    //einmaleins();
    to_binary(200);
    printf("\n%c", to_upper('e'));
    return 0;
}
