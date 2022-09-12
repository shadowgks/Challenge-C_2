#include <stdio.h>
#include <stdlib.h>
//Create struct Etudiant!
struct Etudiant{
    int nMatricule;
    char nom[20];
    int age;
    float note;
};
int main()
{
    //Create different struct variables
    struct Etudiant E;

    //Assign values to struct variables
    printf("Entrez Le Nombre Matricule: ");
    scanf("%d",&E.nMatricule);
    printf("Entrez Le Nom: ");
    scanf("%s",E.nom);
    printf("Entrez Le Nombre Age: ");
    scanf("%d",&E.age);
    printf("Entre Le Nombre de Note: ");
    scanf("%f",&E.note);


    //Affichage
    printf("-------------------------------------\n");
    printf("Matricule De Etudiant est: %d\n",E.nMatricule);
    printf("Le Nom De Etudiant est: %s\n",E.nom);
    printf("Age De Etudiant est: %d\n",E.age);
    printf("Note De Etudiant est: %f\n",E.note);
    return 0;
}
