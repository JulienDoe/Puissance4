#include <stdlib.h>
#include <stdio.h>

#define NB_LIGNES 7
#define NB_COLONNES 7


void affiche_grille()
{
	for (int j = 0; j < NB_COLONNES; j++)
		printf("  %d ", j + 1);
	printf("\n+");
	for (int j = 0; j < NB_COLONNES; j++)
		printf("---+");
	printf("\n|");


}

int main(int argc, char* argv[])
{
	affiche_grille();
	return 0;
}