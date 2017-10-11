#include "stdio.h"

double result(double num1,double num2);
int main(double num1,double num2){
    printf("Please enter two float numbers:");
    while(scanf("%lf %lf",&num1,&num2) == 2){
        result(num1,num2);
        printf("Please enter two float numbers:");
    }

    return 0;
}

double result(double num1,double num2){
    printf("the result is: %lf\n",(num2-num1)/(num2*num1));
}
