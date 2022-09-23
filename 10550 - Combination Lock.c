#include<stdio.h>

int main(){

    int dialPosition,A,B,C;

    while(1){
        scanf("%d%d%d%d",&dialPosition,&A,&B,&C);

        if(dialPosition == 0 && A == 0 && B == 0 && C == 0) break;

        int turn1,turn2,turn3;
        int degrees = 1080;

        if(dialPosition > A)   turn1 = dialPosition - A;
        else                   turn1 = dialPosition + 40 - A;

        if(A > B)              turn2 = B + 40 - A;
        else                   turn2 = B - A;

        if(B > C)              turn3 = B - C;
        else                   turn3 = B + 40 - C;

        degrees += (turn1 + turn2 + turn3) * 9;
        printf("%d\n",degrees);
    }

    return 0;
}
