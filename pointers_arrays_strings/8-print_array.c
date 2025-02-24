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
 * @str: Paramatre dentree
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
	}

	printf("\n");
}
