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
	int i;
	int sign = 1;
	char c;
	int pow = 1;
	int z = 0;
	int digit;
	bool digitFound = false;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = - 1 * sign;
		}
		for (c = '0' ; c <= '9' ; c++)
		{
			if (c == s[i])
			{
				digitFound = true;
				digit = c - '0';
				if (pow < z)
				{
					pow = pow * 10;
				}
				z = z * pow + digit;
			}
		}
		if (digitFound)
		{
			for (c = '0' ; c <= '9' ; c++)
			{
				if (s[i+1] == c)
				{
					digitFound = false;
				}
			}
		}
		if (digitFound == true)
		{
			return (sign * z);
		}
	}
}
		
