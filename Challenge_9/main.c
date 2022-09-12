#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPremier(N){
    int i;
    int estPremier = 1;
    for(i=2; i<=N/2; i++){
        if(N%i == 0){
            //Faux
            estPremier = 0;
        }
    }
    //Return Value 1 or 0
    return estPremier;

}
int main()
{
    int N;
    printf("Entre Le Numbre: ");
    scanf("%d",&N);

    //Check Func Premier or Not
    if(isPremier(N) == 0){
        printf("Non Premier");
    }else{
        printf("Premier");
    }
    return 0;
}
