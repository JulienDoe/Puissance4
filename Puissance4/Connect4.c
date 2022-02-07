#include <stdlib.h>
#include <stdio.h>

#define NB_LIGNES 7
#define NB_COLONNES 7

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

void statut_jeu()
{

}

int main(int argc, char* argv[])
{
	
	printf("\n\n");
	affiche_grille();
	printf("\n\n\t Joueur 1 : ");
	statut_jeu();
	printf("\n\n");
	affiche_grille();
	printf("\n\n\t Joueur 2 : ");
	statut_jeu();
	return 0;
}