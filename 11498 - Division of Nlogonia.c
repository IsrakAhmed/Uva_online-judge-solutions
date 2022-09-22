#include<stdio.h>

int main(){
    int testCases,n,m,x,y;
    char *location;

    while(1){
        scanf("%d",&testCases);

        if(testCases == 0) break;

        scanf("%d%d",&n,&m);

        while(testCases != 0){

            scanf("%d%d",&x,&y);

            if(x > n && y > m)          location = "NE";

            else if(x > n && y < m)     location = "SE";

            else if(x < n && y < m)     location = "SO";

            else if(x < n && y > m)     location = "NO";

            else if(x == n || y == m)   location = "divisa";

            printf("%s\n",location);

            testCases--;
        }
    }

    return 0;
}
