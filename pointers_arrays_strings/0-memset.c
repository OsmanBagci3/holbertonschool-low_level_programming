/*
 * File: 7-leet.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * *leet - Upper case characters
 *
 * @s: Paramatre dentree
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++){
		s[i] = b;
	}

	return (s);
}
