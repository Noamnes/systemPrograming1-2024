#include "NumClass.h"
// passed the testIsPrime() func!
int isPrime(int num){
    if(num<1){
        return 0;
    }
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
// passed the testIsStrong() func!
int isStrong(int num){
    if(num<=0){
        return 0;
    }
    int sum=0;
    int temp = num;
    while(temp>0){
        sum+=factorial(temp%10);
        temp /= 10;
    }
    if(num==sum){
        return 1;
    }
    return 0;
}

// notice: this won't work for numbers higher then 
// int capacity and will overflaw the number
// passed the testFactiorial() func!
int factorial(int num){
    int sum = 1;
    if(num<0){
        return -1;
    }
    for(int i=1; i<=num; i++){
        sum *= i;
    }
    return sum;
}