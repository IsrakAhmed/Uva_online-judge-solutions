#include<stdio.h>

int main(){
    int testCases,i,j,k=1;
    int arr[3];

    scanf("%d",&testCases);

    while(testCases != 0){

        for(i = 0; i < 3; i++){
            scanf("%d",&arr[i]);
        }

        for(i = 0; i < 3; i++){
            for(j = i + 1; j < 3; j++){
                if(arr[i] > arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printf("Case %d: %d\n",k,arr[1]);
        k++;

        testCases--;
    }

    return 0;
}
