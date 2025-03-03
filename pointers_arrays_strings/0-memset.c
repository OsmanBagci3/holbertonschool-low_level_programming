/*
 * File: 0-memset.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_memset - Fills memory with constant byte.
 *
 * @s: Paramatre dentree
 * @b: Un parametre
 * @n: nombre de caractère à considérer
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++){
		s[i] = b;
	}

	return (s);
}
