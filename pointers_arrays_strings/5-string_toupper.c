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
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0 ; i < len ; i++)
	{
		s[i] = toupper(s[i]);
	}

	return (s);
}
