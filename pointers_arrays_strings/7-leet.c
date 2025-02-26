/*
 * File: 7-leet.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *cap_string - Upper case characters
 *
 * @s: Paramatre dentree
 *
 * Return: pointer to s
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char numbers[5] = {'4','3', '0', '7', '1'};
	char majuscules[5] = {'A', 'E', 'O', 'T', 'L'};
	char minuscules[5] = {'a', 'e', 'o', 't', 'l'};

	while (s[i] != '\0')
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (s[i] == majuscules[j] || s[i] == minuscules[j])
			{
				s[i] = numbers[j];
			}
		}
		i++;
	}
	return (s);
}
