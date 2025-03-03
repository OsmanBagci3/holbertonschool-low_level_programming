/*
 * File: 2-strchr.c
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

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}

}
