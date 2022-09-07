#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B , somme , difference , produit , division  ;

        printf("veuillez entrer la valeur de A et B  : ");
        scanf("%f%f",&A,&B);
        somme = A + B ;
        printf("la somme de A + B = %.2f",somme);
        difference = A - B ;
        printf("\nle resultat de A - B = %.2f",difference);
        produit = A * B ;
        printf("\nle resultat de A * B = %.2f",produit);

    if ( B !=0 ){
        division = A / B ;
        printf("\nle resultat de A / B = %.2f",division);

    }

    else
    printf("\n erreur la division sur 0 et impossible" );



        return 0;
}
