#include "stdio.h"

int main(){
    int limit_low,limit_high;
    int sum,i;
    printf("Enter lower and upper integer limits:");
    while((scanf("%d %d",&limit_low,&limit_high) == 2) && (limit_high > limit_low)){
            for(sum = 0,i = limit_low; i <= limit_high; i++)        
                sum += i*i;
            printf("The sums of the squares from %d to %d is %d\n",limit_low*limit_low,limit_high*limit_high,sum);
            printf("Enter next set of limits:");
    }
    printf("Done.\n");

    return 0;
}