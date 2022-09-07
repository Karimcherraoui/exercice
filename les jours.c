#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nombre ;
    printf("veuillez entrer un nombre entre 1-7 : ");
    scanf("%d",&Nombre);
    switch (Nombre){
        case 1 : printf("Lundi");
                    break;
        case 2 : printf("Mardi");
                    break;
        case 3 : printf("Mercredi");
                    break;
        case 4 : printf("Jeudi");
                    break;
        case 5 : printf("Vendredi");
                    break;
        case 6 : printf("Samedi");
                    break;
        case 7 : printf("Dimanche");
                    break;
        default : printf("Erreur ce Nombre est incorrect");
    }

    return 0;
}
