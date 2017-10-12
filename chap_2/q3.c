#include "stdio.h"

int main(void){
    int age,days;
    printf("A boy's age is ");
    scanf("%d",&age);
    days = age * 365;
    printf("A boy is %d years old and he has lived %d days.\n",age,days);

    return 0;
}