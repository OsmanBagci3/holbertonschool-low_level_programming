/*
 * File: 6-puts2.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include "2-strlen.c"
/**
 * puts2 - Use of strlen
 *
 * @str: Paramatre dentree
 *
 */

void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0 ; i < len ; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}	
