/*
 * File: 1-alphabet.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <unistd.h>
/**
 * print_alphabet - Prints alphabet using _putchar
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c = 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
