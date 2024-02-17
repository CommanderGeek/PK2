#include "dictionary.h"
#include <stdlib.h>

#define MAXSIZE 4

typedef enum {
    FREI,
    BESETZT
} status;

typedef struct dict_Element {
    int value;
    status dict_status;
    struct dict_Element* next;
} dict_Element;

dict_Element dict[MAXSIZE] = {NULL};

int hash_value(int a) {
    return a % MAXSIZE;
}

int insert(int a) {
    int pos = hash_value(a);
    dict_Element* ele = &dict[pos];

    if (!ele) {
        ele = (dict_Element*)malloc(sizeof(dict_Element));
        ele->value = a;
        ele->dict_status = BESETZT;
        ele->next = NULL;
        dict[pos] = *ele;
        return 1;
    } else {
        while (ele->next) {
            ele = ele->next;
        }

        ele->next = (dict_Element*)malloc(sizeof(dict_Element));
        ele = ele->next;
        ele->value = a;
        ele->dict_status = BESETZT;
        ele->next = NULL;
        return 1;
    }
    return 0;
}

int erase(int a) {
   int pos = hash_value(a);
    dict_Element *ele = &dict[pos];
    dict_Element *prev = NULL;

    while (ele) {
        if (ele->value == a && ele->dict_status == BESETZT) {
            if (prev) {
                prev->next = ele->next;
            } else {
                dict[pos] = *ele->next;
            }
            free(ele);
            return 1;
        }
        prev = ele;
        ele = ele->next;
    }
    return 0;
}

int member(int a) {
    int pos = hash_value(a);
    dict_Element* ele = &dict[pos];

    while (ele) {
        if (ele->value == a && ele->dict_status == BESETZT) {
            return 1;
        }
        ele = ele->next;
    }

    return 0;
}
