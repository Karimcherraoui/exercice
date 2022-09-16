#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int jour ;
    int mois ;
    int annee ;

}date_naissance ;
typedef struct {

    char nom[20];
    char prenom [20];
    int age ;


    date_naissance date;

}personne;

int main()
{
    personne *T;
    int n ;
    int age , M , somme , i ,j, temp;
    printf("entrez la taille de tableau : ");
    scanf("%d",&n);
    T = malloc(n*sizeof(personne));
    for (i=0;i<n;i++){
        printf("entrez le nom :");
    scanf("%s",T[i].nom);
    printf("entrez le prenom :");
    scanf("%s",T[i].prenom);
    printf("entrez la date de naissance :\n ");

    printf("entrez la date /jour =");
    scanf("%d",&T[i].date.jour);
    printf("entrez la date /mois =");
    scanf("%d",&T[i].date.mois);
    printf("entrez la date /annee =");
    scanf("%d",&T[i].date.annee);
    if (T[i].date.jour>31 || T[i].date.mois>12 || T[i].date.jour<1 || T[i].date.mois<1 )
            printf("date de naissance est incorrect\n");
    T[i].age = 2022 - T[i].date.annee;

    }
    M = 0;
    int sum;
    for (i=0;i<n;i++){

         T[i].M =  (T[i].age +  T[i+1].age)/n ;
             T[i].M++;
    }
     printf("la moyenne est %d \n", T[i].M );
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
            if(T[i].age > T[j].age){
                temp = T[i].age;
                T[i].age = T[j].age;
                T[j].age = temp;
            }
             printf("l'age de %s est %d \n",T[i].prenom, T[i].age);
    }












    return 0;
}
