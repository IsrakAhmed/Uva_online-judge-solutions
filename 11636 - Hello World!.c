#include<stdio.h>

int main(){

    int n,count,i;
    int testCase = 1;

    while(1){

        scanf("%d",&n);

        if(n < 0) break;

        count = 0;
        for(i = 1; i < n; i+=i) count++;

        printf("Case %d: %d\n",testCase,count);
        testCase++;
    }

    return 0;
}
