#include <stdio.h>
#include <stdlib.h>

/**
 * main: reallocate an array
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;
	int k;
	int *p;
	int i;
	char yesNo;

	printf("Entrez la taille initiale du tableau : ");
	fflush( stdout );
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("taille du tableau invalide\n");

		return (1);
	}

	p = (int *)malloc(n * sizeof(int));

	if (p == NULL)
	{
		printf("Echec de l'allocation mémoire\n");

		return (1);
	}

	printf("Entrez %d valeurs : ", n);
	fflush (stdout);

	for (i = 0 ; i < n ; i++)
	{
		scanf("%d", &*(p + i));
	}
	while (getchar() != '\n');

	printf("Voulez vous rajouter d'autres valeurs ? (O/N) : ");
	fflush (stdout);
	scanf("%c", &yesNo);

	if (yesNo == 'O' || yesNo == 'o')
	{
		printf("Combien de valeur supplémentaires ? ");
		fflush (stdout);
		scanf("%d", &k);

		if (k > 0)
		{

			int *new_p = (int *)realloc(p, (k + n) * sizeof(int));

			if (new_p == NULL)
			{
				printf("Echec de l'allocation mémoire\n");

				free(p);

				return (1);
			}

			p = new_p;

			printf("Entrez %d nouvelles valeurs : ", k);
			fflush (stdout);
			for (i = n ; i < (k+n) ; i++)
			{
				scanf("%d", &p[i]);
			}

			printf("Nouveau tableau : ");
			for (i = 0 ; i < (k + n) ; i++)
			{
				printf("%d ", p[i]);
			}
		}
	}
	else
	{
		printf("Contenu du tableau : ");

		for (i = 0 ; i < n ; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);

	printf("\n");

	p = NULL;

	return (0);
}
