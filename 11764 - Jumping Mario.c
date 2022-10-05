#include<stdio.h>

void jumpMario(int testCases,int state){

    int i,walls,height,highJump,lowJump,standingWall;
    scanf("%d",&walls);

    highJump = lowJump = 0;
    for(i = 0; i < walls; i++){
        scanf("%d",&height);

        if(i == 0)      standingWall = height;

        else{
            if(standingWall < height)           highJump++;
            else if(standingWall > height)      lowJump++;
            standingWall = height;
        }
    }

    printf("Case %d: %d %d\n",state,highJump,lowJump);

    if(testCases == state)  return;

    state++;
    jumpMario(testCases,state);
}

int main(){

    int testCases;

    scanf("%d",&testCases);

    jumpMario(testCases,1);

    return 0;
}
