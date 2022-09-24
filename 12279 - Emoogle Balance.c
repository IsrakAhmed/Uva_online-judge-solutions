#include<stdio.h>

int main(){

    int N,actuallyGivenTreat,supposedToGiveTreat;
    int i = 1;

    while(1){
        scanf("%d",&N);

        if(N == 0) break;

        int arr[N],j;
        actuallyGivenTreat = supposedToGiveTreat = 0;

        for(j = 0; j < N; j++){
            scanf("%d",&arr[j]);

            if(arr[j] == 0)     actuallyGivenTreat++;
            else                supposedToGiveTreat++;
        }

        printf("Case %d: %d\n",i,supposedToGiveTreat - actuallyGivenTreat);

        i++;
    }

    return 0;
}
