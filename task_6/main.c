#include <stdio.h>
#include "countspace.h"
#include "minfinder.h"
#include "stringcat.h"
#include "faculty.h"
int main(int argc, char const *argv[])
{
    char c[] = "test test test";
    int x = count_space_index(c);
    printf("%d", x);
    x = count_space(c);
    printf("%d\n", x);
    double z[] = {2.0,3.0,4.0, 1.0, 9.0};
    int minv = minc(z, 5);
    printf("%d\n", minv);
    char* string1 = "Hello ";
    char* string2 = "World!";
    char* string = stringcat(string1, string2);
    printf("%s\n", string);
    int fac = faculty(5);
    printf("%d\n", fac);
    return 0;
}
