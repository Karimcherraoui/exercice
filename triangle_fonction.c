#include <stdio.h>
#include <stdlib.h>
int L , i , j ;

void saisie (){
    printf("veuillez entrer nombre de line : ");
    scanf("%d",&L);
}
void creation (){
 for (i=1 ; i<=L ; i++){
        for (j = 1 ; j<=L-i ; j++ ){
              printf("  "); // creation des espaces
        }

        for (j=1 ; j<= (2*i-1) ; j++ ){
            if (i==L || j==1 || j==(2*i-1)) // pour vider le milieu de triangle
             printf("* ");
            else printf("  ");
        }
       printf("\n");

    }
}


int main()
{

    saisie() ;
    creation();

   /* printf("veuillez entrer nombre de colonnes : ");
    scanf("%d",&C);

    for (i=1 ; i<=L ; i++){
        for (j = 1 ; j<=L-i ; j++ ){
              printf("  "); // creation des espaces
        }

        for (j=1 ; j<= (2*i-1) ; j++ ){
            if (i==L || j==1 || j==(2*i-1)) // pour vider le milieu de triangle
             printf("* ");
            else printf("  ");
        }
       printf("\n");

    }
    */
    return 0;
}
