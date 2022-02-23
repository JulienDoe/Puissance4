#include <stdlib.h>
#include <stdio.h>

#define NB_LIGNES 7
#define NB_COLONNES 7

#define PIONS_GAGNANTS 4

#define P1_COIN ('O')
#define P2_COIN ('X')


void affiche_grille()
{
	for (int j = 0; j < NB_COLONNES; j++)
		printf("  %d ", j + 1);
	printf("\n+");
	for (int j = 0; j < NB_COLONNES; j++)
		printf("---+");
	for (int i = 0; i < NB_LIGNES; i++)
	{
		printf("\n|");
		for (int j = 0; j < NB_COLONNES; j++)
		{
			printf(" ");
			printf(" "); //afficher à cet endroit les jetons des joueurs 1 ou 2 
			printf(" |");
		}
	}
	printf("\n+");
	for (int j = 0; j < NB_COLONNES; j++)
		printf("---+");
	printf("\n");
	for (int j = 0; j < NB_COLONNES; j++)
		printf("  %d ", j + 1);
}

int check_vertical(int (*grille)[NB_COLONNES][NB_LIGNES], int pion)
{
	int victoire = 0;
	for (int i = 0; i < NB_LIGNES; i++)
	{
			if (grille[pion][i] == -1)
				victoire--;
			else if (grille[pion][i] == 1)
				victoire++;
	}
	return victoire;
}

int check_horizontal(int(*grille)[NB_COLONNES][NB_LIGNES], int pion) // NOOK
{
	int victoire = 0;
	for (int i = 0; i < NB_LIGNES; i++)
	{
		for (int j = 0; j < NB_COLONNES; j++)
		{
			if (grille[j][i] == -1)
				victoire--;
			else if (grille[j][i] == 1)
				victoire++;
		}
	}
	return victoire;
}

int check_transversal(int(*grille)[NB_COLONNES][NB_LIGNES],int pion)
{
	int victoire = 0;
}

void statut_jeu(int(*grille)[NB_COLONNES][NB_LIGNES], int pion)
{
	check_vertical(grille,pion);
	check_horizontal(grille,pion);
}

int main(int argc, char* argv[])
{
	int grille[NB_COLONNES][NB_LIGNES]; // attention c'est peut etre inversé
	int pion = 0;
	//int j1 = 0;
	//int j2 = 0;
	

	//AFFICHAGE GRILLE
	/* 
	printf("\n\n");
	affiche_grille();
	printf("\n\n\t Joueur 1 : ");
	statut_jeu();
	printf("\n\n");
	affiche_grille();
	printf("\n\n\t Joueur 2 : ");
	statut_jeu();
	*/

	statut_jeu(grille,pion);


	return 0;
}