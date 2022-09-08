#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N , i ;

    printf("veuillez entrer un nombre : ");
    scanf("%d",&N);

    i = N + 1 ;
    while (i <= N+10){
        printf("%d\n",i);
        i++;
    }

    return 0;
}
