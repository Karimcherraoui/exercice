#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("veuillez entrer un nombre : ");
    scanf("%d",&N);
    if ( N % 2 == 0)
        printf("le nombre %d que vous avez entrer est pair ",N);
    else
        printf("le nombre %d que vous avez entrer est impair ",N);

    return 0;
}
