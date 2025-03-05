/*
 * File: 5-sqrt_recursion.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _sqrt_recursion - Renvoie la racine carre de n ou -1 
 *
 * @n: Paramatre dentree
 *
 * Return: SquareRoot of n
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_find_root(n, 1));
}

int _find_root(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}

	return (_find_root(n, x + 1));
}
