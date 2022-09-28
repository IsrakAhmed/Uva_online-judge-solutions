#include<stdio.h>

int main(){

    long long int N;

    while(1){

        scanf("%lld",&N);
        if(N >= 0)      printf("%lld\n",((N * N) + N + 2) / 2);
        else            break;

    }

    return 0;
}
