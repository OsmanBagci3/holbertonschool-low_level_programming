/*
 * File: 4-print_rev.c
 */
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_rev - Print a string in reverse
 *
 * @s: Paramatre dentree
 *
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int tabLength = _strlen(s);
	int i;

	for (i = tabLength ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
