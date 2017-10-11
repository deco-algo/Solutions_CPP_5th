#include "stdio.h"

int main(){
    int boundary_lower,boundary_higher;
    printf("Please specify the lower and higher boundary:");
    scanf("%d %d",&boundary_lower,&boundary_higher);
    printf("Table of Squared&Cubed\n");
    int i;
    for(i=boundary_lower;i<boundary_higher+1;i++){
        printf("%d\t%d\t%d\t\n",i,i*i,i*i*i);
    }
    return 0;
}