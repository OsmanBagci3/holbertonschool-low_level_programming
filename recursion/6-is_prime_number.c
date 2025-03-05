/*
 * File: 6-is_prime_number.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * is_prime_number - Find prime numbers 
 *
 * @n: Paramatre dentree
 *
 * Return: 1 if n is prime number
 *
 */

int is_prime_number(int n)
{
	return (_check_if_prime_number(n, 2));
}

int _check_if_prime_number(int n, int x)
{
	if (n <= 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	if (n % x == 0)
	{
		return 0;
	}
	if (x * x > n)
	{
		return 1;
	}
	
	return (_check_if_prime_number(n, x + 1));
}
