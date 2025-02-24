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

	for (i = 0 ; sizeof(*s) ; i++)
	{
		printf("%c ", *(s + i));
	}
	return (0);
}
