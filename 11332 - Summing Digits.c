#include<stdio.h>

int sum(long long int n){

    int sum = 0;

    while(n != 0){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int countDigit(long long int n){

    int numOfDigits = 0;

    while(n != 0){
        n /= 10;
        numOfDigits++;
    }

    return numOfDigits;
}

int main(){

    long long int n;
    int numOfDigits;

    while(1){

        scanf("%lld",&n);

        if(n == 0)  break;

        while(1){
            numOfDigits = countDigit(n);

            if(numOfDigits == 1){
                printf("%lld\n",n);
                break;
            }

            else    n = sum(n);
        }
    }

    return 0;
}
