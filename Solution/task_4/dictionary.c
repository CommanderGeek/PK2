#define MAXSIZE 2
#include "dictionary.h"
typedef enum{
    FREI,
    BESETZT
}status;

typedef struct {
int value;
status dict_status;
}dict_Element;

dict_Element dict[MAXSIZE];

int hash_value(int a){
    return a % MAXSIZE;
}

int insert(int a){
    int pos;
        int counter = 0;
        do {
            pos = hash_value(a+counter);
            if(! (dict[pos].dict_status == BESETZT) ){
                dict_Element e = {a, BESETZT};
                dict[pos] = e;
                return 1;
            }
            counter++;
        } while(counter < MAXSIZE);
    return 0;
}
int erase(int a){
    int pos;
    int counter = 0;
    do{
        pos = hash_value(pos+counter);
        if(dict[pos].value == a){
            dict[pos].dict_status = FREI;
            dict[pos].value = -1;
            return 1;
        }
        counter++;
    }while(counter < MAXSIZE);
    return 0;
}
int member(int a){
    int pos;
    int counter = 0;
    do{
        pos = hash_value(a+counter);
        if(dict[pos].value == a){
            return 1;
        }
        counter++;
    }while(counter < MAXSIZE);
    return 0;
}