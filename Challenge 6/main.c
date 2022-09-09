#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 6\n");
    printf("###############################\n");
    printf("\n");

    char N[4],NC[4];
    printf("Enter Le 4 caractere: ");
    scanf("%s",N);
    printf("Enter Le 4 De Comparaison caractere: ");
    scanf("%s",NC);



    int count = 1;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(N[i] == NC[j]){
                    count++;
                    break;
            }
        }
    }

    if(count == 4){
        printf("les mêmes lettres avec la même quantité");
    }else{
        printf("Faild");
    }



    return 0;
}
