/*
 * File: 3-str_spn.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _strspn - Getting the length of a prefix substring
 *
 * @s: Paramatre dentree
 * @accept: Un parametre
 * @n: nombre de caractère à considérer
 *
 * Return: pointer to s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k=0;
	char *deb = accept;
	unsigned int fin = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				k++;
				break;
			}
			accept++;
		}
		if (k == fin)
		{
			break;
		}
		fin = k;
		accept = deb;
		s++;
	}
	return (k);
}
