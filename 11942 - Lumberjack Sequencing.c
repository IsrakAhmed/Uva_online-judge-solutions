#include<stdio.h>

int isAscending(int *numbers){
    int state,i;

    for(i = 0; i < 9; i++){
        if(numbers[i] < numbers[i + 1]){
            state = 1;
        }
        else{
            state = 0;
            break;
        }
    }

    return state;
}

int isDescending(int *numbers){
    int state,i;

    for(i = 0; i < 9; i++){
        if(numbers[i] > numbers[i + 1]){
            state = 1;
        }
        else{
            state = 0;
            break;
        }
    }

    return state;
}

int main(){

    int testCases,i,ascending,descending;
    int numbers[10];

    scanf("%d",&testCases);
    printf("Lumberjacks:\n");

    while(testCases != 0){

        for(i = 0; i < 10; i++){
            scanf("%d",&numbers[i]);
        }

        ascending = isAscending(numbers);
        descending = isDescending(numbers);

        if(ascending || descending)     printf("Ordered\n");
        else                            printf("Unordered\n");

        testCases--;
    }

    return 0;
}
