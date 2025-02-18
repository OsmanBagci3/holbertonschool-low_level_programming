/*
 * File: 0-putchar.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <unistd.h>
/**
 * main - Prints _putchar
 *
 * Return: Always 0.
 */

int main(void)
{
	char _ = '_';
	char p = 'p';
	char u = 'u';
	char t = 't';
	char c = 'c';
	char h = 'h';
	char a = 'a';
	char r = 'r';

	_putchar(_);
	_putchar(p);
	_putchar(u);
	_putchar(t);
	_putchar(c);
	_putchar(h);
	_putchar(a);
	_putchar(r);
	putchar('\n');


	return (0);
}
