#include <stdlib.h>
#include "minfinder.h"
double minc(double a[], int n){
    if(n > 0){
        double min = a[0];
        double *pointer = &a[1];
        while(*pointer != a[n]){
            if(min > *pointer){
                min = *pointer;
            }
            pointer = pointer +1;
        }
        return min;
    }else{
        return 0.0;
    }
}