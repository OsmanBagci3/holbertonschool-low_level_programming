/*
 * File: 100-ato_i.c
 */
#include <stdio.h>
#include <stdbool.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _atoi - Converts string to int
 *
 * @s: Parametre dentree
 *
 * Return: An integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	double z = 0;
	bool digitFound = false;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1 * sign;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			z = z * 10 + (s[i] - '0');
			digitFound = true;
		}
		else if (digitFound)
		{
			break;
		}
		i++;
	}
	return (sign * z);
}
