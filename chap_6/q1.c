#include "stdio.h"

int main(){
    char alphabet[26];
    int index;

    for(index=0;index<26;index++){
        alphabet[index]='a'+index;
        printf("%3c",alphabet[index]);
    }
    return 0;
}