#include "stdio.h"

int main(void){
    void s(void);

    s();s();s();
    putchar('\n');
    s();s();
    putchar('\n');
    s();
    putchar('\n');

    return 0;
}

void s(void){
    printf("Smile!");
}