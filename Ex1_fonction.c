#include <stdio.h>
#include <stdlib.h>
// difinition des fonctions
void signe(int A , int B){
    if(A*B < 0)
        printf("les deux valeurs on des signes differents \n ");

    else
        printf(" les deux valeurs on le meme signe \n ");
}
int minimum(int A , int B ){
    int min ;
    if(A > B)
        min = B ;
    else
        min = A ;
        return min ;
}
int maximum(int A , int B ){
    int max ;
    if (A <B )
        max = B ;
    else
        max = A ;

        return max ;
}
int main()
{
    int A , B , max ,min ;
        printf("veuillez entrer la valeur de A : ");
            scanf("%d",&A);
        printf("veuillez entrer la valeur de B : ");
            scanf("%d",&B);
            signe(A,B);   // l'appel de fonction
        max = maximum(A,B);
        min = minimum(A,B);
        printf("la valeur minimale est : %d \n",min);
        printf("la valeur maximale est : %d \n",max);



    return 0;
}
