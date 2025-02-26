/*
 * File: 2-strn_cpy.C
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_strcpy - Copy data from one string into the
 *		the memory of the other string
 *
 * @dest: Paramatre dentree
 * @src: Parametre dentree 2
 * @n: Condition d arret
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int compteur = 0;

	while (src[i] != '\0' && compteur < n)
	{
		dest[i] = src[i];
		i++;
		compteur++;
	}

	dest[i] = '\0';

	return (dest);
}
