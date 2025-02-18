/*
 * File: 2-print_alphabetx10.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include "1-alphabet.c"

/**
 * print_alphabet - Prints alphabet using _putchar
 *			x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		print_alphabet();
	}
	_putchar('\n');

}
