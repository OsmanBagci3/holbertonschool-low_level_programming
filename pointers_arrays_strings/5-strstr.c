/*
 * File: 5-str_str.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_strstr - Locate a substring.
 *
 * @haystack: Paramatre dentree
 * @needle: Un parametre
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *toReturn;
	char *a;

	while (*haystack)
	{
		if (*needle == *haystack)
		{
			toReturn = haystack;

			for (a = needle ; *a ; a++)
			{
				if (*a != *haystack)
				{
					break;
				}
				haystack++;
			}
			if (*a == '\0')
			{
				return (toReturn);	
			}
		}

		haystack++;
	}
	return (NULL);
}
