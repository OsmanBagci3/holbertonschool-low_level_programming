/*
 * File: 6-cap_string.c
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

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((int)s[i] >= 97 && (int)s[i] <= 122)
		{
			if (i == 0)
			{
				s[i] = (int)s[i] - 32;
			}
			else
			{
				if (s[i-1] == ' ')
				{
					s[i] = (int)s[i] - 32;
				}
				else if (s[i-1] == '\n' || s[i-1] == '\t')
				{
					s[i] = (int)s[i] - 32;
				}
			}
		}
		i++;
	}

	return (s);
}
