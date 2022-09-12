#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int divededby(a,b){
    return a/b;
}
bool isPremier(N){
    int i;
    bool estPremier = true;
    for(i=2; i<=N/2; i++){
        if(N%i == 0){
            //Faux
            estPremier = false;
            break;
        }
    }
    //Return Value 1 or 0
    return estPremier;

}
int main()
{
    int a,b;
    printf("Entre le numbre A: ");
    scanf("%d",&a);
    printf("Entre le numbre B: ");
    scanf("%d",&b);

    if(isPremier(divededby(a,b))== false){
        printf("Le Numbre Non Premier");
    }else{
        printf("Le Numbre Premier");
    }
    return 0;
}

