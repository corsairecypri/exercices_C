#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    //Déclaration des variable

    int ab;
    int bc;


    //J'ai essayé de leur allouer de la mémoire mais ça ne fonctionne pas
    //ab = malloc(sizeof(int));
    //bc = malloc(sizeof(int));


    //Utilisation de scanf

    printf("Taille de AB (en cm) : ");
    scanf("%i", &ab);

    printf("Taille de BC (en cm) : ");
    scanf("%i", &bc);


    //Vérification anti-bugs

    if(ab <= 0 || bc <= 0)
    {
        printf("Au moins une valeur incorrecte a été détectée\n");
        return 1;

        //Etonnement cette condition de vérification
        //d'inégalité numérique fonctionne aussi
        //pour les lettres
    }


    //Vérifications arithmétique

    printf("AB = %i\n", ab);
    printf("Le carré de AB est de %.0f cm²...\n", pow(ab, 2));
    printf("BC = %i\n", bc);
    printf("Le carré de BC est de %.0f cm²...\n", pow(bc, 2));

    //Note : lors des test, l'usage de pow m'a obligé à utiliser
    //des %f (des flottants) au lieu des %i, d'où les %.0f
    //(je préfère utiliser des int pour vérifier facilement
    //l'exactitude des calculs)


    //calcul final

    printf("Le carré de l'hypothénuse AC est de %.0f cm²...", pow(ab, 2) + pow(bc, 2));
}