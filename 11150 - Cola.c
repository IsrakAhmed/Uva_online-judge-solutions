#include<stdio.h>

int main(){
    int bottles,total;

    while(scanf("%d",&bottles) != EOF){

        int state = 0;
        if(bottles % 2 == 0){
            bottles++;
            state = 1;
        }

        total = bottles;
        while(bottles != 1){
            total += bottles / 3;
            bottles = (bottles / 3) + (bottles % 3);
        }

        if(state) total--;

        printf("%d\n",total);
    }

    return 0;
}
