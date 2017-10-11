#include "stdio.h"

int main(){
    int i,k;

    for(i=0;i<6;i++){
        for(k=0;k<i+1;k++)
            printf("%c",'F'-k);
        printf("\n");
    }
    return 0;
}