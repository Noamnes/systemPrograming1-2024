#include "NumClass.h"
#include <stdio.h>
void run();

int main(){   
    run();
    return 0;
}

void run(){
    int start,end;
    scanf("%d %d",&start, &end);
    printf("The Armstrong numbers are:");
    for(int i=start; i<=end; i++){
        if(isArmstrong(i)){
            printf(" %d",i);
        }
    }
    printf("\n");

    printf("The Palindromes are:");
    for(int i=start; i<=end; i++){
        if(isPalindrome(i)){
            printf(" %d",i);
        }
    }
    printf("\n");

    printf("The Prime numbers are:");
    for(int i=start; i<=end; i++){
        if(isPrime(i)){
            printf(" %d",i);
        }
    }
    printf("\n");

    printf("The Strong numbers are:");
    for(int i=start; i<=end; i++){
        if(isStrong(i)){
            printf(" %d",i);
        }
    }
    printf("\n");
}
