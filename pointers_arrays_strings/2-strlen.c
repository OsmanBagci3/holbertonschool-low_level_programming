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
 * Return: size of table
 */

int _strlen(char *s)
{
	int compteur = 0;

	while (s[compteur] != '\0')
	{
		compteur++;
	}

	return (compteur);
}
