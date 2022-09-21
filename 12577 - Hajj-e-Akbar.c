#include<stdio.h>
#include<string.h>

int main(){
    char line[10];
    int i = 1;

    while(strcmp(line,"*")){
        gets(line);

        if(!strcmp(line,"Hajj")) printf("Case %d: Hajj-e-Akbar\n",i);
        else if(!strcmp(line,"Umrah")) printf("Case %d: Hajj-e-Asghar\n",i);

        i++;
    }

    return 0;
}
