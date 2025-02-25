/*
 * File: 0-str_cat.c
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

char *_strcat(char *dest, char *src)
{
	int i;
	char *ptr = dest;

	while (src[i] != '\0')
	{
		dest += src[i];
	}

	return (ptr);
}		
