#include<stdio.h>

int main(){

    int testCases,i,j;

    scanf("%d",&testCases);

    for(j = 1; j <= testCases; j++){
        char url[10][100];
        int relevance[10];
        int max = 0;

        for(i = 0; i < 10; i++){
            scanf("%s",url[i]);
            scanf("%d",&relevance[i]);

            if(relevance[i] > max){
                max = relevance[i];
            }
        }

        printf("Case #%d:\n",j);
        for(i = 0; i < 10; i++){
            if(max == relevance[i]){
                printf("%s\n",url[i]);
            }
        }
    }

    return 0;
}
