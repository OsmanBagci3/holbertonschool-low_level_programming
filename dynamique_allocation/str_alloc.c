#include <stdio.h>
#include <stdlib.h>

/**
 * main: Allocate dynamic table
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;
	char *p;
	int a;
	int i;

	printf("Entrez la taille de la chaine de caractère : ");
	fflush(stdout);
	scanf("%d", &n);

	p = (char *)malloc(n * sizeof(char));

	if (p == NULL)
	{
		printf ("echec d'allocation de la mémoire\n");

		return (1);
	}

	while (getchar() != '\n');

	printf("Entrez un texte de %d caractère : ", n);
	fflush(stdout);
	fgets(p, n, stdin);

	printf("Vous avez entré : ");

	for (i = 0 ; i < n ; i++)
		printf("%c", *(p + i));

	free (p);
	return (0);
}
