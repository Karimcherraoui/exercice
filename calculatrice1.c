#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float N1 , N2 , R ;
    char operateur ;
    printf("veuillez entrer le premier nombre :");
    scanf(" %f",&N1);
    printf("veuillez entrer l'operateur de calcul :");
    scanf(" %c",&operateur);
    printf(" veuillez entrer le deuxieme nombre :");
    scanf("%f",&N2);
    if (operateur == '+'){
       R = N1 + N2 ;
       printf("%.2f + %.2f = %.2f",N1,N2,R);
           }
           else if (operateur == '-'){
                R = N1 - N2 ;
       printf("%.2f - %.2f = %.2f",N1,N2,R);
           }
           else if (operateur == '*'){
            R = N1 * N2 ;
       printf("%.2f * %.2f = %.2f",N1,N2,R);
           }
           else if (operateur == '/'){
                if (N2 != 0){
                     R = N1 / N2 ;
                    printf("%.2f / %.2f = %.2f",N1,N2,R);
                }

                else
                    printf("\n erreur la division sur 0 et impossible" );
           }
            else if (operateur == 'p') {
                    R = pow(N1,N2) ;
                    printf("%.2f pow %.2f = %.2f",N1,N2,R);

            }

            else ("erreur  !! cette operation introuvable veuillez corriger les donnees");



    return 0;
}
