/*
 * File: 7-puts_half.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include "2-strlen.c"
/**
 * puts_half - Prints second half of str
 * 
 * @str: Paramatre dentree
 *
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = len / 2 ; i < len ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
