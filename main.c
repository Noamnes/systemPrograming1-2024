#include "NumClass.h"
#include <stdio.h>
#include "tests.h"
void run();
void testReverse(int lim, int jumpSize);

int main(){   
    run();
    printf("\n");
    return 0;
}

void testReverse(int lim, int jumpSize){
    for(int n=1; n<=lim; n*=jumpSize){
        printf("rev(%d)=%d ",n,reverse(n));
    }
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
