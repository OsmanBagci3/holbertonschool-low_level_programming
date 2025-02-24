/*
 * File: 9-strcpy.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_strcpy - Copy data from one string into the
 *		the memory of the other string
 *
 * @dest: Paramatre dentree
 * @src: Parametre dentree 2
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (ptr);
}
