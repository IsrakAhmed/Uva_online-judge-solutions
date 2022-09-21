#include<stdio.h>
#include<string.h>

int main(){
    int testCases,temp,money=0;
    char operation[10];

    scanf("%d",&testCases);

    while(testCases != 0){
        scanf("%s",operation);

        if(!strcmp(operation,"donate")){
            scanf("%d",&temp);
            money += temp;
        }

        if(!strcmp(operation,"report")) printf("%d\n",money);

        testCases--;
    }

    return 0;
}
