#include <stdio.h>
#include <stdlib.h>
int a,b; //var global

//Function Somme
int Somme(int a, int b){
    return a+b;
}

int main()
{
    //Saisez Pour User
    printf("Entre Le Numbre A: ");
    scanf("%d",&a);
    printf("Entre Le Numbre A: ");
    scanf("%d",&b);

    //Affichage Rusltat
    printf("La Somme Est: %d",Somme(a,b));
    return 0;
}
