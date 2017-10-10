#include "stdio.h"

int main(double num1,double num2){
    printf("Please enter two float numbers:");
    while(scanf("%lf %lf",&num1,&num2) == 2){
        printf("the result is: %lf\n",(num2-num1)/(num1*num2));
        printf("Please enter two float numbers:");
    }

    return 0;
}
