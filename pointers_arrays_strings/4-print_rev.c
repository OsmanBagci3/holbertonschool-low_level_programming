/*
 * File: 4-print_rev.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _strlen - Use of strlen
 *
 * @s: Paramatre dentree
 *
 * Return: size of table
 */

void print_rev(char *s)
{
	int tabLength = sizeof(s);
	int i;

	for (i = tablength ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
