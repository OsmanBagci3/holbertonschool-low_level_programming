/*
 * File: 8-print_array.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include "2-strlen.c"
/**
 * print_array - Prints other characters
 *
 * @a: Paramatre dentree
 * @n: Longueur souhaitee
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
