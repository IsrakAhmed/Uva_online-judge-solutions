#include<stdio.h>

int main(){
    int testCases,n,m;

    scanf("%d",&testCases);

    while(testCases != 0){

        scanf("%d%d",&n,&m);

        printf("%d\n",(n / 3) * (m / 3));

        testCases--;
    }

    return 0;
}
