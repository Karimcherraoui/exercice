#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    # la categorie A : 7% de TVA
    # la categorie B : 20% de TVA
    # la categorie C : 25% de TVA
    # Si le Prix TTC et superieur a 500 DH vous aurez une facture
*/
    char categorie ;
    float prix_ttc , prix_ht ;

    printf("veuillez enter la categorie de produit : ");
    scanf("%c",&categorie);
    printf("le prix HT de produit : ");
    scanf("%f",&prix_ht);
    switch (categorie){
        case 'A' : prix_ttc = prix_ht * 1.07 ;
                    printf("Le prix TTC = %.2f",prix_ttc);
                    break;
        case 'B' : prix_ttc = prix_ht * 1.2 ;
                     printf("Le prix TTC = %.2f",prix_ttc);
                    break;
        case 'C' : prix_ttc = prix_ht * 1.25 ;
                     printf("Le prix TTC = %.2f",prix_ttc);
                     break;


        default : printf("la categorie est incorrect");
                    break;
    }

    if (prix_ttc > 500)
        printf("\ntirez votre facture");
    else
        printf("\nmerci de votre visit");


    return 0;
}
