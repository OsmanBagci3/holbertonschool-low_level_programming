/*
 * File: 100-ato_i.c
 */
#include <stdio.h>
#include <stdbool.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *_strcpy - Copy data from one string into the
 *		the memory of the other string
 *
 * @s: Parametre dentree 
 *
 * Return: Pointer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int z = 0;
	bool digitFound = false;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = - 1 * sign;
		}
		
		if (s[i] >= '0' && s[i] <= '9')
		{
			z = z * 10 + (s[i] -'0');
			digitFound = true;
		}
		else if (digitFound)
		{
			break;
		}
		i++;
	}
	return (z * sign);
}
