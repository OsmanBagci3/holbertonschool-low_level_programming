/*
 * File: 4-print_alphabt.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabet in lowercase
 *	except q and e
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (!(ch == 'q') && !(ch == 'e'))
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
