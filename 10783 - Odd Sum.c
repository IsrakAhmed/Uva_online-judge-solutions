#include<stdio.h>

void oddSum(int testCases,int state){
    int a,b,i;
    int sum = 0;

    scanf("%d%d",&a,&b);

    for(i = a; i <= b; i++){
        if(i % 2 != 0)             sum += i;
    }

    state++;
    printf("Case %d: %d\n",state,sum);

    if(state < testCases)          oddSum(testCases,state);
}

int main(){

    int testCases;
    scanf("%d",&testCases);

    oddSum(testCases,0);

    return 0;
}
