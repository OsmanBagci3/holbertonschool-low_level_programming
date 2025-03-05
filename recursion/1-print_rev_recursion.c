/*
 * File: 1-print_rev_recursion.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _print_rev_recursion - Recursive Printing 
 *
 * @s: Paramatre dentree
 *
 *
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);

}
