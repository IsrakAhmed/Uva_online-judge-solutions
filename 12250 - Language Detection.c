#include<stdio.h>
#include<string.h>

int main(){

    char lang[14];
    int i = 1;

    while(1){
        scanf("%s",lang);

        if(!strcmp("#",lang))   break;

        else if(!strcmp(lang,"HELLO")){
            printf("Case %d: ENGLISH\n",i);
        }

        else if(!strcmp(lang,"HOLA")){
            printf("Case %d: SPANISH\n",i);
        }

        else if(!strcmp(lang,"HALLO")){
            printf("Case %d: GERMAN\n",i);
        }

        else if(!strcmp(lang,"BONJOUR")){
            printf("Case %d: FRENCH\n",i);
        }

        else if(!strcmp(lang,"CIAO")){
            printf("Case %d: ITALIAN\n",i);
        }

        else if(!strcmp(lang,"ZDRAVSTVUJTE")){
            printf("Case %d: RUSSIAN\n",i);
        }

        else{
            printf("Case %d: UNKNOWN\n",i);
        }

        i++;
    }

    return 0;
}
