#include "stdio.h"

int main(){
    int num[8];
    int i,k;

    printf("Please enter 8 integer digits.\n");
    for(i = 0; i < 8; i++)
        scanf("%d",&num[i]);
    printf("Now printing in reverse...\n");
    for(k = 7; k>=0; k--)
        printf("%-2d",num[k]);          //-2d means align left
    printf("\n");
}