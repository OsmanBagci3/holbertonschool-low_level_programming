#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main: Create table of 3 students and 
 *	display data
 *
 * Return: 0 if success
 */

struct Etudiant {
	char nom[50];
	int age;
	float moyenne;
};

int main(void)
{
	struct Etudiant e1;
	struct Etudiant e2;
	struct Etudiant e3;
	struct Etudiant tab[3] = {
		{"Ousmane Dembele", 20, 16.5},
		{"Gigi Donnarumma", 28, 19.5},
		{"Vitinha", 24, 18.0}
	};
	int i;

	for (i = 0 ; i < 3 ; i++)
	{
		printf("nom de l'élève : %s, ", tab[i].nom);
		printf("age de l'élève : %d, ", tab[i].age);
		printf("moyenne de l'élève : %.1f\n", tab[i].moyenne);
	}

	return (0);
}
