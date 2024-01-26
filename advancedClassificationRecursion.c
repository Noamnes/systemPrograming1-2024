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

// passed testIsPalindrome(10000)!
int isPalindrome(int num){
    return num == reverse(num);
}
// passed testReverse(10000,9)!
int reverse(int num){
    if(numLength(num)==1){
        return num;
    }
    int rightD = num%10;
    int restOfNum = num/10;
    return rightD*power(10,numLength(num)-1) + reverse(restOfNum);
}