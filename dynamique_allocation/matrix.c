#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main: reallocate an array
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;
	int m;
	int j;
	int **p;
	int i;
	char yesNo;

	printf("Entrez le nombre de ligne de la matrice : ");
	fflush( stdout );
	if (scanf("%d", &m) != 1)
	{
		printf("\n");
		printf("saisie incorrecte");

		return (1);
	}
	printf("Entrez le nombre de colonne de la matrice : ");
	fflush( stdout );
	if (scanf("%d", &n) != 1)
	{
		printf("\n");
		printf("Saisie incorrecte");

		return (1);
	}

	if (n <= 0 || m <= 0)
	{
		printf("\n");
		printf("Saisie taille du tableau 2D invalide\n");

		return (1);
	}

	p = (int**)malloc(m * sizeof(int*));

	if (p == NULL)
	{
		printf("Echec de l'allocation mémoire\n");

		return (1);
	}

	for (i = 0 ; i < m; i++)
	{
		p[i] = (int*)malloc(n * sizeof(int));

		if (p[i] == NULL)
		{
			printf("echec de l'allocation mémoire\n");
			while (i--) free(p[i]);
			free(p);
			return (1);
		}
	}

	printf("Entrez %d valeurs : ", n);
	printf("\n");

	for (i = 0 ; i < m ; i++)
	{
		printf("ligne %d : ", i);
		fflush(stdout);
		for (j = 0 ; j < n ; j++)
		{
			scanf("%d", &(p[i][j]));
		}
	}


	printf("\n");

	printf("Affichage matrice : \n");

	for (i = 0 ; i < m ; i++)
	{
		for (j = 0; j < n ; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}

	while (getchar() != '\n');

	printf("Voulez vous rajouter une ligne ? (O/N) : ");
	fflush (stdout);
	scanf(" %c", &yesNo);

	if (yesNo == 'O' || yesNo == 'o')
	{
		m++;

		int **new_p = (int**)realloc(p, m * sizeof(int*));

		if (new_p == NULL)
		{
			printf("Echec de l'allocation mémoire\n");

			for (i = 0 ; i < m ; i++)
				free(*(p + i));

			free(p);
			return (1);
		}

		p = new_p;
		p[m-1] = (int*)malloc(n * sizeof(int));
		if (p[m - 1] == NULL)
                {
                        printf("echec de l'allocation mémoire\n");
			
			for (i = 0; i < m - 1; i++)
				free(p[i]);
			free(p);
                        return (1);
                }


		printf("Entrez %d nouvelles valeurs pour la dernière ligne : ", n);
		fflush (stdout);
		for (i = 0 ; i < n ; i++)
		{
			scanf("%d", &*(*(p + (m-1)) + i));
		}

		printf("\n");

		printf("Nouvelle matrice : \n");
		for (i = 0 ; i < m ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				printf("%d ", p[i][j]);
			}
			printf("\n");
		}

	}

	for (i = 0; i < m ; i++)
		free(p[i]);

	free(p);

	printf("\n");

	p = NULL;

	return (0);
}
