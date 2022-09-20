#include<stdio.h>

int main(){
    int testCases,value,i;
    int result;

    scanf("%d",&testCases);

    for(i = 0; i < testCases; i++){
        scanf("%d",&value);

        result = (((((value * 567) / 9) + 7492) * 235) / 47) - 498;
        result /= 10;
        result = result % 10;

        if(result < 0) result *= -1;

        printf("%d\n",result);
    }

    return 0;
}
