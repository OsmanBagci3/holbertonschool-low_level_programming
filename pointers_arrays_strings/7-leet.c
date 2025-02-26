/*
 * File: 7-leet.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *cap_string - Upper case characters
 *
 * @s: Paramatre dentree
 *
 * Return: pointer to s
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' ||
			s[i] == 'E' || s[i] == 'o' || s[i] == 'O' || s[i] == 'l'
			|| s[i] == 'L' || s[i] == 't' || s[i] == 'T')
		{
			s[i] = transfo(s[i]);
		}
		i++;
	}
	return (s);
}

char transfo(char t)
{
	if (t < 100)
	{
	}

	return (t);
}
