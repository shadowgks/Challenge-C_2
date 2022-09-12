#include <stdio.h>
#include <stdlib.h>

int a,b,c; //Var global

//Func echanger
void echanger(int a,int b){
    //Remplace
    c = a;
    a = b;
    b = c;
    //Affichage
    printf("Le Numbre Echanges: \nA = %d\nB = %d",a,b);
}
int main()
{
    //Saiser Le nombre pour Client
    printf("Entre Le numbre A: ");
    scanf("%d",&a);
    printf("Entre Le numbre B: ");
    scanf("%d",&b);

    //Func echanger Declared
    echanger(a,b);

    return 0;
}
