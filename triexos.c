#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Swap est une fonction utilisée dans l'exercice 2 pour échanger 2 nombres en échangeant leurs adresses
void swap(int *a, int *b)
{
    //On utilise la variable temporaire tmp pour stocker temporairement la valeur des variables à un instant t
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main(void)
{
    //Exo 1 --------------------------------------

    //Le but est de calculer le produit (multiplication) de 2 nombres saisis

    int num1;
    int num2;

    printf("Choisissez la valeur de num1 : \n");
    scanf("%i", &num1);

    printf("Choisissez la valeur de num2 : \n");
    scanf("%i", &num2);

    printf("Le produit de num1 et num2 est de %i\n", num1 * num2);


    // Exo 2  ------------------------------


    //Le but est d'échanger la valeur de num3 et de num4

    int num3;
    int num4;

    printf("Choisissez la valeur de num3 : \n");
    scanf("%i", &num3);

    printf("Choisissez la valeur de num4 : \n");
    scanf("%i", &num4);

    //Valeurs des variables avant échange
    printf("Num3 vaut %i et Num4 vaut %i\n", num3, num4);


    swap(&num3, &num4); //Swap permet d'échanger les 2 adresses

    //Valeurs des variables après échange
    printf("Num3 vaut %i et Num4 vaut %i\n", num3, num4);


    //Exercice 3 ------------------------------

    //Le but est d'afficher le plus grand de 3 valeurs saisies

    int num5;
    int num6;
    int num7;


    printf("Choisissez la valeur de num5 : \n");
    scanf("%i", &num5);

    printf("Choisissez la valeur de num6 : \n");
    scanf("%i", &num6);

    printf("Choisissez la valeur de num7 : \n");
    scanf("%i", &num7);


    //Por détecter les valeurs incorrectes

    if(num5 <= 0 || num6 <= 0 || num7 <= 0)
    {
        printf("Au moins une valeur incorrecte a été détectée\n");
        return 1;
    }


    if (num5 > num6 && num5 > num7)
    {
        printf("%i est le plus grand\n", num5);
    }
    else if (num6 > num5 && num6 > num7)
    {
        printf("%i est le plus grand\n", num6);
    }
    else if (num7 > num5 && num7 > num6 && num7)
    {
        printf("%i est le plus grand\n", num7);
    }
    else
    {
        printf("ERREUR : Une égalité a été détectée\n");
    }


    //Exercice 4  ------------------------------------

    //Le but est de d'écrire un programme qui permet d'écrire dans un .CSV le nom d'une voiture et sa plaque d'immatriculation


    FILE *file = fopen("voiture.csv", "a");   //"a" veut dire que je peut ajouter des éléments
    //1er argument est le nom du fichier
    //2ème argument est soit r, soit w, soit a...
    // (r = read, w = write, a = ajouter)


    if(!file) //Si pas de fichier
    {
        return 1;
    }

    char voiture[17] ;
    char plaque[17];

    printf("Nom de la voiture : ");
    scanf("%s", voiture);


    printf("Plaque d'immatriculation : ");
    scanf("%s", plaque);


    //écrire dans le fichier csv

    fprintf(file, "%s, %s\n", voiture, plaque);  //Imprimer dans le fichier

    //fermer le fichier CSV

    fclose(file);


}