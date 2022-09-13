#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
    int i , j , tmp , taille ;
    printf("veuillez entrer la taille de tableau : ");
    scanf("%d",&taille);
    printf("veuillez saisir les elements de tableau : \n");
    for (i = 0 ; i<taille ; i++){

       printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
        }
    printf("les elements de tableau avant tri :\n");
     for (i=0 ; i<taille ; i++){
        printf(" T[%d] = %d\n ",i+1,T[i]);
     }
     printf("ajoutez des elements :\n");
     scanf("%d",&T[i]);
     taille++;


    for (i=0 ; i<taille ; i++){
        for (j = i+1  ; j<taille ; j++){

            if (T[i]>T[j]){ //
            tmp = T[i];
            T[i] = T[j];
            T[j] = tmp ;


            }
        }
    }
    printf("\nle tri par insertion croissant est :\n");
    for (i=0 ; i<taille ; i++)
        printf("T[%d] = %d\n",i+1,T[i]);


    return 0;
}
