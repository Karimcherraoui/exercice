#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i , v , nmax = 0 , nmin = 0;

    printf("veuillez entrer le nombre de valeurs : ");
    scanf("%d",&N);


         for (i = 0 ; i < N ; i++){
        printf("\nentrer la valeur %d :",i+1);
        scanf("%d",&v);

         //Initialisation du max et min

        if ( i == 0){
            nmax = v ;
            nmin = v ;
        }
        if ( v > nmax ){
            nmax = v ;
        }
        if ( v < nmin ) {
            nmin = v ;
        }
         }
        printf("le maximum est : %d",nmax);
        printf("\nle minimum est : %d",nmin);

    return 0;
}
