#include<stdio.h>

int main(){

    int testCases,i,a,b;

    scanf("%d",&testCases);

    for(i = 0; i < testCases; i++){
        scanf("%d%d",&a,&b);

        if(a == b){
            printf("=\n");
        }

        else if(a > b){
            printf(">\n");
        }

        else if(a < b){
            printf("<\n");
        }

    }

    return 0;
}
