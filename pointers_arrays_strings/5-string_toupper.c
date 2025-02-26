/*
 * File: 5-string_toupper.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *string_toupper - Upper case characters
 *
 * @s: Paramatre dentree
 *
 * Return: pointer to s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((int)s[i] >= 97 && (int)s[i] <= 122)
		{
			s[i] = (int)s[i] - 32;
		}
		i++;
	}

	return (s);
}
