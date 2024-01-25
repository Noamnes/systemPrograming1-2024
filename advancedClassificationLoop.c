#include "NumClass.h"
#include <stdio.h>
// passed testIsPalindrome(1000)!
int isPalindrome(int num){
    return (reverse(num)==num);
}
// passed testReverse(100000,9)!
// assumes positive natural number:
int reverse(int num){
    int temp = num;
    int res = 0;
    for(int i=numLength(num)-1; i>=0; i--){
        res += (temp%10)*power(10,i);
        temp /= 10;
    }
    return res;
}


// passed by testIsArmstrong(10000):
// assumes the number is natural
int isArmstrong(int num){
    int temp = num;
    int sum = 0;
    while(temp!=0){
        sum += power(temp%10,numLength(num));
        temp /= 10;
    }
    return num==sum;
}
