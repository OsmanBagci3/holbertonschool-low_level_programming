/*
 * File: 1-memcpy.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_memset - Copies memory area
 *
 * @dest: Paramatre dentree
 * @src: Un parametre
 * @n: nombre de caractère à considérer
 *
 * Return: pointer to s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
}
