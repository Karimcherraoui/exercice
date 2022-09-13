#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50];
    int i , taille , pos ;
    debut :
    printf("enter la taille de tableau");
    scanf("%d",&taille);
    printf("veuillez entrer les valeurs de tableau : ");
    for (i = 0 ; i<taille ; i++){
            printf("T[%d] = ",i+1);
            scanf("%d",&T[i]);
    }
    printf("veuillez entrer la position de votre suppression :");
    scanf("%d",&pos);

    if (pos<0 || pos>taille){
        printf("error la position est incorrect \n");
        goto debut ;
}
    else
        for (i=pos ; i<taille ; i++){
            T[i-1]=T[i];

        }
        taille--;

    printf("les elements de tableau est : \n");
    for(i=0 ; i<taille ; i++)

    printf("T[%d] = %d \n",i+1,T[i]);



    return 0;
}
