/*
 * File: 2-strleng.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _strlen - Use of strlen
 *
 * @s: Paramatre dentree
 *
 */

int _strlen(char *s)
{
	int i;
	int size = sizeof(s) / sizeof(*s);

	for (i = 0 ; i < size ; i++)
	{
		printf("%c ", *(s + i));
	}
	return (0);
}
