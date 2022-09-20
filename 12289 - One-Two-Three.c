#include<stdio.h>

int main(){
    int testCases;
    char word[10];

    scanf("%d",&testCases);

    int i;
    for(i = 0; i < testCases; i++){
        scanf("%s",word);

        if(word[0] == 'o' && (word[1] == 'n' || word[2] == 'e')) printf("1\n");
        else if((word[0] == 'o' || word[1] == 'n') && word[2] == 'e') printf("1\n");
        else if((word[0] == 'o' || word[2] == 'e') && word[1] == 'n') printf("1\n");

        else if(word[0] == 't' && (word[1] == 'w' || word[2] == 'o')) printf("2\n");
        else if((word[0] == 't' || word[1] == 'w') && word[2] == 'o') printf("2\n");
        else if((word[0] == 't' || word[2] == 'o') && word[1] == 'w') printf("2\n");

        else if(word[0] == 't' && word[1] == 'h' && word[2] == 'r' && word[3] == 'e') printf("3\n");
        else if(word[0] == 't' && word[1] == 'h' && word[2] == 'r' && word[4] == 'e') printf("3\n");
        else if(word[0] == 't' && word[1] == 'h' && word[3] == 'e' && word[4] == 'e') printf("3\n");
        else if(word[0] == 't' && word[2] == 'r' && word[3] == 'e' && word[4] == 'e') printf("3\n");
        else if(word[1] == 'h' && word[2] == 'r' && word[3] == 'e' && word[4] == 'e') printf("3\n");

    }

    return 0;
}
