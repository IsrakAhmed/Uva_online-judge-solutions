#include<stdio.h>

int main(){
    int testCases,L,W,H,i;

    scanf("%d",&testCases);

    for(i = 1; i <= testCases; i++){

        scanf("%d%d%d",&L,&W,&H);

        if(L > 20 || W > 20 || H > 20)      printf("Case %d: bad\n",i);
        else                                printf("Case %d: good\n",i);

    }

    return 0;
}
