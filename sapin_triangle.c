#include <stdio.h>
#include <stdlib.h>
int L;
void espace(int i){
    for(int j=0;j<i;j++){
        printf("  ");
    }
}
int saisie (){

    printf("veuillez entrer nombre de line : ");
    scanf("%d",&L);
    return L;
}
void creation (int L,int M){
    int  i , j ;
 for (i=1 ; i<=L ; i++){
        espace(M);
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


 saisie();
for(int i=0;i<3;i++){
    creation(L+i,L-i);
    printf("*")
}




    return 0;
}
