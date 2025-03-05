/*
 * File: 2-strrlen_recursion.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _strlen_recursion - Recursive count
 *
 * @s: Paramatre dentree
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));

}
