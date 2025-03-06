/*
 * File: palindrome.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * is_palindrome - check if s can be read in both way 
 *	from start to end and from end to start
 *
 * @s: String
 * @start: Starting
 * @end: Ending
 *
 * Return: 1 if s can be read both way
 *
 */

int is_palindrome(const char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}

	start++;
	end--;
	return (is_palindrome(s, start, end));
}
