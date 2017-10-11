#include "stdio.h"

int main(){
    printf("Please enter the driver letter:");
    char driver;
    scanf("%c",&driver);
    int rel;
    rel=driver-'A'+1;
    int i,j,k,l;
    for(i=0;i<rel;i++){
        for(j=0;j<rel-1-i;j++)
            printf(" ");
        for(k=0;k<i+1;k++)
            printf("%c",'A'+k);
        for(l=0;l<i;l++)
            printf("%c",driver-rel+i-l);
        printf("\n");
    }
    return 0;
}