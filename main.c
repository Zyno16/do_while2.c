#include <stdio.h>
#include <stdlib.h>

int main()
{int i, n;
    printf("enter a number");
    scanf("%d",&n);
    i=n+1;
    do{printf("%d\n",i);
    i++;

    }while(i<=n+10);
    return 0;
}
