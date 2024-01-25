#include <stdio.h>
#include "NumClass.h"

// assumes the number is non-negative(including 0):
int numLength(int num){
    if(num==0){
        return 1;
    }
    int temp = num;
    int length=0;
    while(temp!=0){
        temp /= 10;
        length++;
    }
    return length;
}
// passed testPower(3,4)
// assumes the base & exponent are natural (not 0):
int power(int base, int exponent){
    int result = 1;
    for(int i=0; i<exponent;i++){
        result *= base;
    }
    return result;
}