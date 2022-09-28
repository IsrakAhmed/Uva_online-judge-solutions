#include<stdio.h>

int main(){

    long long int hashmatsArmy,opponentArmy,diff;

    while(scanf("%lld%lld",&hashmatsArmy,&opponentArmy) != EOF){

        diff = (hashmatsArmy > opponentArmy) ? (hashmatsArmy - opponentArmy) : (opponentArmy - hashmatsArmy);
        printf("%lld\n",diff);

    }

    return 0;
}
