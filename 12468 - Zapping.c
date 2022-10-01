#include<stdio.h>

int main(){

    int presentChannel,targetChannel,goFront,goBack;

    while(1){
        scanf("%d%d",&presentChannel,&targetChannel);

        if(presentChannel == -1 || targetChannel == -1)     break;

        if(presentChannel < targetChannel){
            goFront = targetChannel - presentChannel;
            goBack = 100 - goFront;
        }

        else if(presentChannel > targetChannel){
            goFront = presentChannel - targetChannel;
            goBack = 100 - goFront;
        }

        else{
            printf("0\n");
            continue;
        }

        int distance = (goFront < goBack) ? goFront : goBack;

        printf("%d\n",distance);
    }

    return 0;
}
