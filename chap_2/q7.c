#include "stdio.h"

void two(void){
    printf("two");
}

void one_three(void){
    printf("one\n");
    two();
    printf("\nthree\n");
}

int main(void){
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}