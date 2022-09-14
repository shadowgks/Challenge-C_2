#include <stdio.h>
#include <stdlib.h>
void strcpy(char T[],char TC[]){

    //Use new var pointeur because table like constant
    char *a = T;
    char *b = TC;


    //Check content T if you receipt 'end of caractere \0'
    while(*a != '\0'){
        //'Table TC' take info from 'Table T'
        *b = *a;
        //Increment
        a++;
        b++;
    printf("%p\n",b);
    }
    *b="\0"; //important end of string case
    printf("Les Donnes Copy Dans La Table: %s",TC);

}
int main()
{
    char T[30],TC[30];
    printf("Entrez les Text: ");
    scanf("%s",T);
    strcpy(&T,&TC);


    return 0;
}
