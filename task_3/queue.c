#include <stdio.h>
#define MAX_SIZE 2 
int array[MAX_SIZE];
int start = -1;
int end = -1;

void enqueue(int i) {
    if ((end + 1) % MAX_SIZE == start) {
 //       printf("Die Queue ist voll. Element kann nicht hinzugefügt werden.\n");
    } else {
        if (start == -1) {
            start = 0;
        }
        end = (end + 1) % MAX_SIZE;
        array[end] = i;
        printf("Element %d wurde erfolgreich in die Queue eingefügt.\n", i);
    }
}

int dequeue() {
    int element;
    if (start == -1) {
       // printf("Die Queue ist leer. Es kann kein Element entfernt werden.\n");
        return -1;
    } else {
        element = array[start];
       // printf("Element %d wurde aus der Queue entfernt.\n", element);
        if (start == end) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % MAX_SIZE;
        }
        return element;
    }
}
