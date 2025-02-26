/*
 * File: 1-strn_cat.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_strncat - Concatenate data from one string into
 *		the other string
 *
 * @dest: Paramatre dentree
 * @src: Parametre dentree 2
 * @n: Parametre condition d arret
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;
	int compteur = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0' && compteur < n)
	{
		dest[len] = src[i];
		i++;
		len++;
		compteur++;
	}

	return (dest);
}
