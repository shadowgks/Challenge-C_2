#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 3\n");
    printf("###############################\n");
    printf("\n");

    float a,b,R,M;

    printf("Entre le nombre A: ");
    scanf("%f",&a);
    printf("Entre le nombre A: ");
    scanf("%f",&b);

    if(a == b){
        R = a+b;
        M = R * 3;
        printf("renvoie le triple de leur somme est: %.2f",M);
    }else{
        R = a+b;
        printf("La somme Est: %.2f",R);

    }

    return 0;
}
