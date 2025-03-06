/*
 * File: somme.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * somme_chiffres - Sums all characters of n 
 *
 * @n: Paramatre dentree
 *
 * Return: Result of sum
 *
 */

int somme_chiffres(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return ((n % 10) + somme_chiffres(n / 10));
}
