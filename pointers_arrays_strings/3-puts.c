/*
 * File: 3-puts.c
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
 * Return: size of table
 */

void _puts(char *str)
{
	
	int i;

	while(str[i] != '\0')
	{
		puts(str[i]);
		i++;
	}
	puts("");
}
