/*
 * File: 3-factorial.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * factorial - Renvoie le factoriel de n 
 *
 * @n: Paramatre dentree
 *
 * Return: Factorial n
 *
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n-1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
