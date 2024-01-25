#include <stdio.h>
#include "NumClass.h"
// passed testIsArmstrong(10000)!
int isArmstrong(int num){
    return num == calcArmstrong(num,numLength(num));
}
// passed testCalcArmstrong(10000,9)!!
int calcArmstrong(int num, int OriginalLength){
    if(num==0){
        return 0;
    }
    int rightD = num%10;
    int restOfNum = num/10;
    return power(rightD,OriginalLength) + calcArmstrong(restOfNum,OriginalLength);
}

// passed testIsPalindrome(1000)!
int isPalindrome(int num){
    // if the number has one digit (or if it's zero, as used in the recursion)
    if(numLength(num)==1){
        return 1;
    }
    int rightD = num%10;
    int leftD = num/power(10,numLength(num)-1);
    int restOfNum = (num - rightD - leftD*power(10,numLength(num)-1))/10;
    return (rightD == leftD) && isPalindrome(restOfNum);
}