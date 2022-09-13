#include <stdio.h>
#include <stdlib.h>

int main()
{
   int T[50] , i , pos , n , taille ;
   printf("entrer la taille de tableau :");
   scanf("%d",&taille);
   for (i=0 ; i<taille ; i++){
    printf("veuillez entrer les valeurs de tableau: T[%d] =   ",i+1);
   scanf("%d",&T[i]);
                }
    printf("entrer la valeur de n : ");
    scanf("%d",&n);
    printf("entrer la position de n dans le tableau ");
    scanf("%d",&pos);
    if (pos<=0 || pos>taille){
        printf("position invalide !! ");
    }
    else{

    for (i=taille ; i>=pos ; i--){
        T[i] = T[i-1];
            }
        taille++;
        T[pos-1]= n ;
        printf("element de tableau apres insertion : \n");
        for (i=0 ; i<taille ; i++)
            printf("T[%d] = %d \n",i+1 ,T[i]);
    }








    return 0;
}
