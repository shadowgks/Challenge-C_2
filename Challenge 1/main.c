#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 1\n");
    printf("###############################\n");
    printf("\n");

    int N;

    printf("Entre Le Nombre: ");
    scanf("%d",&N);

    if(N%2 == 0){
        printf("Le nombre Paire");
    }else{
        printf("Le nombre imPaire");
    }


    printf("\n");
    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");

    /*//Resultat
    printf("\n");
    printf("la valeur equivalente en octal est: %o\n",dm);
    printf("la valeur equivalente en hexaecimal est: %x",dm);
    printf("\n");*/

    return 0;
}
