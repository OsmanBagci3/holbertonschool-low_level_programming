/*
 * File: 3-str_cmp.C
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_strncpy - Copy data from one string into the
 *		the memory of the other string
 *
 * @dest: Paramatre dentree
 * @src: Parametre dentree 2
 * @n: Condition d arret
 *
 * Return: Pointer to dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		difference = (int)s1[i] - (int)s2[i];
		i++;
	}

	return (difference);
}
