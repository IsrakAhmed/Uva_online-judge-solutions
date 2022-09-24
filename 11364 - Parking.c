#include<stdio.h>

void sort(int *arr,int size){

    int i,j;

    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int testCases,storesToVisit,i;

    scanf("%d",&testCases);

    while(testCases != 0){

        scanf("%d",&storesToVisit);

        int posOnStreet[storesToVisit];

        for(i = 0; i < storesToVisit; i++){
            scanf("%d",&posOnStreet[i]);
        }

        sort(posOnStreet,storesToVisit);

        int distance = 0;
        for(i = 0; i < storesToVisit - 1; i++){
            distance += posOnStreet[i + 1] - posOnStreet[i];
        }

        printf("%d\n",distance * 2);

        testCases--;
    }

    return 0;
}
