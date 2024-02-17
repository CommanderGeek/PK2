#include "dictionary.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%d\n", insert(1));
printf("%d\n", insert(3));
printf("%d\n", erase(3));
printf("%d\n", insert(5));
printf("%d\n", member(5));
    return 0;
}
