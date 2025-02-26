/*
 * File: 5-string_toupper.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * reverse_array - Copy data from one string into the
 *		the memory of the other string
 *
 * @a: Paramatre dentree
 * @n: Condition d arret
 *
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((int)s[i] >= 97 && (int)s[i] <= 122)
		{
			(int)s[i] = (int)s[i] - 32;
		}
		
		i++;
	}


	return (s);
}
