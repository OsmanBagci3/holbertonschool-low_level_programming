#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main: using enum to check order status
 *
 *
 * Return: 0 if success
 */

enum StatutCommande {EN_ATTENTE, EXPEDIE, LIVRE, ANNULE};

typedef struct{

	int id;
	float montant;
	enum StatutCommande statut;
} Commande;

int main(void)
{
	const char *status[] = {"EN_ATTENTE", "EXPEDIE", "LIVRE", "ANNULE"};

	Commande c1 = {1, 8.40, EN_ATTENTE};

	printf("la commande n°%d est actuellement à l'état %s "
			"et coûte %.2f\n", c1.id, status[c1.statut], c1.montant);

	//commande a ajouter

	Commande c2;

	printf("Entrez l'id de la commande : ");
	fflush(stdout);
	scanf("%d", &c2.id);


	printf("Entrez le montant de la commande : ");
	fflush(stdout);
	scanf("%f", &c2.montant);


	while (c2.statut < EN_ATTENTE || c2.statut > ANNULE)
	{
		printf("Entrez l'etat de la commande 0 = EN_ATTENTE "
				", 1 = EXPEDIE, 2 = LIVRE, 3 = ANNULE : ");
		fflush(stdout);
		scanf("%d", &c2.statut);
		if (c2.statut < EN_ATTENTE || c2.statut > ANNULE)
		{
			printf("veuillez entrer un etat entre 0 et 3 !\n");
		}
	}


	printf("la commande n°%d est actuellement à l'état %s "
			"et coûte %.2f", c2.id, status[c2.statut], c2.montant);

	return (0);
}
