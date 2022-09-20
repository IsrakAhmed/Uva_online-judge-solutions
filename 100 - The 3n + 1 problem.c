#include<stdio.h>

int main()
{

    int i,j,k,maxLength,temp,length,swap;

    while(scanf("%d%d",&i,&j) != EOF)
    {

        printf("%d %d",i,j);

        if(i > j)
        {
            swap = i;
            i = j;
            j = swap;
        }

        maxLength=0;
        for(k = i; k <= j; k++)
        {
            temp = k;
            length=1;
            while(temp != 1)
            {
                if(temp % 2 == 0) temp = temp / 2;
                else if(temp % 2 != 0) temp = (3 * temp) + 1;

                length++;

            }
            if(length > maxLength) maxLength = length;
        }

        printf(" %d\n",maxLength);
    }
    return 0;
}
