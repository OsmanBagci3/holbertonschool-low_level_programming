#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * main: Create table of 3 students and 
 *	display data
 *
 * Return: 0 if success
 */

typedef struct {
	char rue[100];
	char ville[50];
	int code_postal;
} Adresse;

typedef struct{
	char nom[50];
	int age;
	Adresse *adresse;
} Personne;


int VerifPositiveNumber(char* input)
{
	int i;
	char c;
	bool isValid;
	size_t len = strlen(input);

	do {
		isValid = true;
		for (i = 0; i < len; i++)
		{

			if (!isdigit(input[i]))
			{
				isValid = false;
			}
		}
		if (isValid == 0 || atoi(input) <= 0)
		{

			printf("Veuillez saisir un nombre entier positif supérieur à 0.\n");
			fflush(stdout);

			while ((c = getchar()) != '\n' && c != EOF);
			scanf("%[^\n]", input);

		} 
		else 
		{
			return (atoi(input));
		}
	} while(1);
}

int main(void)
{

	int n;
	char input[100];
	int i;
	char c;
	Adresse *adresse;
	bool isValid;

	printf("Entrez le nombre d'adresses à renseigner : ");
	fflush(stdout);
	scanf("%[^\n]", input);

	n = VerifPositiveNumber(input);

	Personne *personne = (Personne*)malloc(n*sizeof(Personne));

	if (personne == NULL)
	{
		printf("allocation mémoire échoué\n");

		return (1);
	}


	for (i = 0 ; i < n ; i++)
	{
		while (getchar() != '\n');

		printf("entrez nom : ");
		fflush(stdout);
		fgets(personne[i].nom, 50, stdin);

		printf("entrez âge : ");
		fflush(stdout);
		scanf("%d", &(personne[i].age));

		printf ("renseignement de l'adresse :\n");
		while (getchar() != '\n');

		adresse = (Adresse*)malloc(256*sizeof(Adresse));

		if (adresse == NULL)
		{
			printf("allocation mémoire de adresse échoué\n");
			return(1);
		}
		printf("renseignement rue : ");
		fflush(stdout);
		fgets(adresse -> rue, 100, stdin);

		printf("renseignement ville : ");
		fflush(stdout);
		fgets(adresse -> ville, 50, stdin);


		printf("renseignement du code postal : ");
		fflush(stdout);
		scanf("%d", &(adresse -> code_postal));

		personne[i].adresse = adresse;

	}

	for (i = 0; i < n ; i++)
	{

		printf("%s a %d ans et habite au %s à %s dont le code"
				"postal est : %d", personne[i].nom, personne[i].age, personne[i].adresse -> rue,
				personne[i].adresse -> ville, personne[i].adresse -> code_postal);
		printf("\n");
		printf("--------------------------------------------\n");
		printf("\n");
	}
	free(adresse);

	free(personne);

	return (0);
}
