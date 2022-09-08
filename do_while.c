#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;

    printf("veuillez entrer un nombre : ");
    scanf("%d",&n);
    int i = n;
    do {

        printf("%d\n",i+1);
        i++;

        }
        while ( i < n+10 );


    return 0;
}
