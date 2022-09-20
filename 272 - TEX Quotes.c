#include<stdio.h>

int main(){
    char ch;
    int i = 1;

    while(scanf("%c",&ch) != EOF){
        if(ch == '\"'){
            if(i % 2 != 0){
                printf("``");
            }
            else if(i % 2 == 0){
                printf("''");
            }
            i++;
        }
        else{
            printf("%c",ch);
        }
    }

    return 0;
}
