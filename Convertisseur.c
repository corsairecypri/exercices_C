#include <stdio.h>
#include <cs50.h>

int main(void)
{
	//Note : les cours de la bourse utilisés sont ceux qui étaient en cours durant la journée du 4 octobre 2021


	printf("Bonjour sur mon convertisseur de monnaie...\n");
	printf("Choisissez une devise...\n");


	int monnaie = get_int("Euros = 1; Dollars US = 2; Livres Sterling = 3; Yens = 4 et Yuans = 5\n");


	if (monnaie == 1)
	{
		//Conversion des euros

		float euros = get_float("Quel est le nombre d'euros à convertir ?\n");

		float eurosDollars = euros * 1.16;
		float eurosLivres = euros * 0.85;
		float eurosYens = euros * 129.25;
		float eurosYuans = euros * 7.5;

		printf("%.2f euros vaut %.2f dollars US, %.2f livres sterlings, %.2f yens et %.2f yuans\n", euros, eurosDollars, eurosLivres, eurosYens, eurosYuans);

		return 0;
	}
	else if (monnaie == 2)
	{
		//Conversion des dollars

		float dollars = get_float("Quel est le nombre de dollars US à convertir ?\n");

		float dollarsEuros = dollars * 0.86;
		float dollarsLivres = dollars * 0.73;
		float dollarsYens = dollars * 111.20;
		float dollarsYuans = dollars * 6.45;

		printf("%.2f dollars US vaut %.2f euros, %.2f livres sterlings, %.2f yens et %.2f yuans\n", dollars, dollarsEuros, dollarsLivres, dollarsYens, dollarsYuans);

		return 0;
	}
	else if (monnaie == 3)
	{
		//Conversion des livres sterling

		float livres = get_float("Quel est le nombre de livres Sterling à convertir ?\n");

		float livresEuros = livres * 1.17;
		float livresDollars = livres * 1.36;
		float livresYens = livres * 151.45;
		float livresYuans = livres * 8.78;

		printf("%.2f livres Sterling vaut %.2f euros, %.2f dollars US, %.2f yens et %.2f yuans\n", livres, livresEuros, livresDollars, livresYens, livresYuans);

		return 0;
	}
	else if (monnaie == 4)
	{
		//Conversion des yens

		float yens = get_float("Quel est le nombre de yens à convertir ?\n");

		float yensEuros = yens * 0.0077;
		float yensDollars = yens * 0.0090;
		float yensLivres = yens * 0.0066;
		float yensYuans = yens * 0.058;

		printf("%.2f yens vaut %.2f euros, %.2f dollars US, %.2f livres Sterling et %.2f yuans\n", yens, yensEuros, yensDollars, yensLivres, yensYuans);

		return 0;
	}
	else if (monnaie == 5)
	{
		//Conversion des yuans

		float yuans = get_float("Quel est le nombre de yuans à convertir ?\n");

		float yuansEuros = yuans * 0.13;
		float yuansDollars = yuans * 0.16;
		float yuansLivres = yuans * 0.11;
		float yuansYens = yuans * 17.53;

		printf("%.2f yuans vaut %.2f euros, %.2f dollars US, %.2f livres Sterling et %.2f yens\n", yuans, yuansEuros, yuansDollars, yuansLivres, yuansYens);

		return 0;
	}
	else
	{
		printf("ERREUR\n");
		return 1;
	}


}