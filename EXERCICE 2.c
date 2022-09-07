#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Quantite_produit ;
    float prix_vente , CA ;
    printf("veuillez entrer la quantite de produits vendus : \n");
    scanf("%d",&Quantite_produit);
    printf("veuillez entrer le prix de vente : \n");
    scanf("%f",&prix_vente);
    CA = Quantite_produit * prix_vente ;
    printf("le chiffre d'affaire est : %.2f",CA);
    return 0;
}
