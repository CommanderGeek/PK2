#include <stdlib.h>
#include <string.h>
char *stringcat (const char* str1, const char*str2){
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    char *string = malloc(len1 + len2 + 1); 
    int i = 0;
    while(*(str1+i) != '\0'){
        *(string + i) = *(str1 + i);
        i++;
    }
    int j = 0;
    while(*(str2+j) != '\0'){
        *(string+i+j) = *(str2+j);
        j++;
    }
    *(string+i+j) = '\0';
    return string;
}