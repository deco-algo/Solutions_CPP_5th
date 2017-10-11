#include "stdio.h"
#include "string.h"

int main(){
    printf("Please enter a word:");
    char word[20];
    scanf("%s",word);
    int k;
    for(k=strlen(word)-1;k>=0;k--)
        printf("%c",word[k]);
    printf("\n");
    return 0;
}