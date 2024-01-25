#include <stdio.h>
#include "NumClass.h"
#include "tests.h"
// tests for advancedClassificationLoop.c:
void testIsPalindrome(int lim){
    for(int i=1; i<=lim; i++){
        if(isPalindrome(i)){
            printf("%d, ",i);
        }
    }
}
// test only in recursive versions:
// void testCalcArmstrong(int lim, int jumpSize){
//     for(int i=1; i<=lim; i*=jumpSize){
//         printf("arm(%d)=%d, ",i,calcArmstrong(i,numLength(i)));
//     }
// }

// only test in iterative versions:
// void testReverse(int lim, int jumpSize){
//     for(int n=1; n<=lim; n*=jumpSize){
//         printf("rev(%d)=%d ",n,reverse(n));
//     }
// }

void testIsArmstrong(int lim){
    for(int i=1; i<=lim; i++){
        if(isArmstrong(i)){
            printf("%d ",i);
        }
    }
}

void testNumLength(int lim, int jumpSize){
    for(int i=1; i<=lim; i*=jumpSize){
        printf("len(%d)=%d, ",i,numLength(i));
    }
}

void testPower(int limBase, int limExponent){
    for(int b=1; b<=limBase;b++){
        for(int e=1; e<=limExponent; e++){
            printf("%d^%d=%d, ",b,e,power(b,e));
        }
        printf("\n");
    }
}

// tests for basicClassification.c:
void testIsStrong(int lim){
    for(int i=-1;i<=lim;i++){
        if(isStrong(i)){
            printf("%d ",i);
        }
    }
}

void testFactiorial(int lim){
    for(int i=-1; i<=lim; i++){
        printf("%d!=%d, ",i,factorial(i));
    }
}

void testIsPrime(int lim){
    for(int i=-1; i<=lim; i++){
        if(isPrime(i)){
            printf("%d, ", i);
        }
    }
}