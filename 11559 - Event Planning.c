#include<stdio.h>

int main(){

    int participants,budget,hotels,weeks,price,beds,i,j,cost,finalCost;

    while(scanf("%d%d%d%d",&participants,&budget,&hotels,&weeks) != EOF){

        finalCost = 0;
        int k = 0;

        for(i = 0; i < hotels; i++){
            scanf("%d",&price);

            int state = 0;
            for(j = 0; j < weeks; j++){
                scanf("%d",&beds);

                if(beds >= participants)    state = 1;
            }

            if(state){
                cost = price * participants;
                if(k == 0){
                    finalCost = cost;
                }
                else if(finalCost > cost){
                    finalCost = cost;
                }
                k++;
            }
        }

        if(finalCost <= budget && finalCost != 0)     printf("%d\n",finalCost);
        else                        printf("stay home\n");
    }

    return 0;
}
