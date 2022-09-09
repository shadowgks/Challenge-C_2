#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 2\n");
    printf("###############################\n");
    printf("\n");

    char N;

    printf("Entre Les voyelle: ");
    scanf("%c",&N);

    switch(N){
         case 'a':{
            printf("Vrai");
            break;
        }case 'e':{
            printf("Vrai");
            break;
        }case 'i':{
            printf("Vrai");
            break;
        }case 'o':{
            printf("Vrai");
            break;
        }case 'u':{
            printf("Vrai");
            break;
        }case 'y':{
            printf("Vrai");
            break;
        }
        default:{
            printf("Faux");

        }


    }

}
