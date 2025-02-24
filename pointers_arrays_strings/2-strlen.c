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
	char i = *s;

	while (i != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}
