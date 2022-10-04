#include<stdio.h>
#include<string.h>

void goRobo(int testCases,int state){

    if(testCases == state)      return;

    int N,i,position = 0;
    char instruction[10];

    scanf("%d",&N);

    int allInstructions[N];

    for(i = 0; i < N; i++){
        scanf(" %s",instruction);

        if(!strcmp(instruction,"LEFT")){
                position--;
                allInstructions[i] = -1;
            }
        else if(!strcmp(instruction,"RIGHT")){
            position++;
            allInstructions[i] = 1;
        }
        else{
            int temp;
            scanf(" %s%d",instruction,&temp);
            position += allInstructions[temp - 1];
            allInstructions[i] = allInstructions[temp - 1];
        }
    }

    printf("%d\n",position);

    state++;
    goRobo(testCases,state);
}

int main(){

    int testCases;

    scanf("%d",&testCases);

    goRobo(testCases,0);

    return 0;
}
