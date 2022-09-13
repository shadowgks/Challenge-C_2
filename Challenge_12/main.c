#include <stdio.h>
#include <stdlib.h>
void strcpy(char *T[3],char *TC[3]){
    *TC = *T;
    printf("Les Donnes Copy Dans La Table: %s",TC);

}
int main()
{
    char T[30],TC[30];
    printf("Entre Some Text: ");
    scanf("%s",T);
    strcpy(&T,&TC);


    return 0;
}
