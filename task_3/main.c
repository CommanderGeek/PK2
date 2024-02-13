#include "upper.h"
#include "queue.h"
int main(int argc, char const *argv[])
{
    char text[] = "Teste mich doch";
    upper(text);
    enqueue(1);
enqueue(2);
enqueue(2);
printf("%i ", dequeue());
enqueue(3);
printf("%i ", dequeue());
printf("%i ", dequeue());
printf("%i ", dequeue());
enqueue(4);
enqueue(5);
printf("%i ", dequeue());
printf("%i \n", dequeue());
    return 0;
}
