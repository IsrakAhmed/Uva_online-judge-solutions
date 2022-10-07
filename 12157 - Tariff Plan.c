#include<stdio.h>

int main(){

    int testCases,i,numOfCalls,callDuration,mileTotal,juiceTotal;

    scanf("%d",&testCases);

    for(i = 1; i <= testCases; i++){

        mileTotal = juiceTotal = 0;

        scanf("%d",&numOfCalls);
        while(numOfCalls != 0){

            scanf("%d",&callDuration);

            mileTotal += ((callDuration / 30) + 1) * 10;
            juiceTotal += ((callDuration / 60) + 1) * 15;

            numOfCalls--;
        }

        if(mileTotal < juiceTotal)              printf("Case %d: Mile %d\n",i,mileTotal);
        else if(mileTotal > juiceTotal)         printf("Case %d: Juice %d\n",i,juiceTotal);
        else if(mileTotal == juiceTotal)        printf("Case %d: Mile Juice %d\n",i,mileTotal);
    }

    return 0;
}
