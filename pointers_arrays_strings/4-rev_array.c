/*
 * File: 4-rev_array.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * reverse_array - Copy data from one string into the
 *		the memory of the other string
 *
 * @a: Paramatre dentree
 * @n: Condition d arret
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int tempValue;

	for (i = 0 ; i < (n / 2) ; i++)
	{
		tempValue = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tempValue;
	}
}
