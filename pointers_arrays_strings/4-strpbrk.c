/*
 * File: 4-str_pbrk.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_strchr - Fills memory with constant byte.
 *
 * @s: Paramatre dentree
 * @b: Un parametre
 * @n: nombre de caractère à considérer
 *
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept ; *a ; a++)
		{
			if (*a == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
