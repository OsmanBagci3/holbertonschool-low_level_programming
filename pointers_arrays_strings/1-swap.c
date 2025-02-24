/*
 * File: 1-swap.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * swap_int - Swap value of two integers
 *
 * @a: Paramatre dentree
 * @b: Parametre dentree
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
