#include<stdio.h>

int main()
{

    char song[][20] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};

    int songSize = sizeof(song) / sizeof(song[0]);

    int testCase,i;
    int j = 0;

    scanf("%d",&testCase);

    char names[testCase][100];

    for(i = 0; i < testCase; i++)
    {
        scanf("%s",names[i]);
    }

    i = 0;

    int namesCompleted = 0;
    while(1)
    {

        if(i == testCase)
        {
            i = 0;
            namesCompleted = 1;
        }

        if(namesCompleted && j == songSize)
        {
            break;
        }

        if(j == songSize)
        {
            j = 0;
        }

        printf("%s: %s\n",names[i],song[j]);
        i++;
        j++;
    }

    return 0;
}
