/*
 * File: 3-str_cmp.C
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_strcmp - Copy data from one string into the
 *		the memory of the other string
 *
 * @s1: Paramatre dentree
 * @s2: Parametre dentree 2
 *
 * Return: Value of str_cmp
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((int)s1[i] != (int)s2[i])
		{
			difference = (int)s1[i] - (int)s2[i];
			break;
		}
		i++;
	}

	return (difference);
}
