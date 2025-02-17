/*
 * File: 7-print_tebahpla.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints reversed alphabet
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
