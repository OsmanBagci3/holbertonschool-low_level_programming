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
 * Return: Copied function
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
