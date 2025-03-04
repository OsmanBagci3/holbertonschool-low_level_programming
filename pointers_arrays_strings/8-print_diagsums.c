/*
 * File: 8-print_diagsums.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_diagsums - Prints diagsum
 *
 * @a: Paramatre dentree
 * @size: Taille entree
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		diag1 = diag1 + *(a + (size + 1) * i);
		diag2 = diag2 + *(a + (i + 1)*(size-1));
	}


	printf("%d, %d\n", diag1, diag2);
}
