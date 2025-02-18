/*
 * File: 7-print_last_digit.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * print_last_digit - Get last digit of n
 *
 * @n : Parameter entre
 *
 * Return: 1 or 0.
 */

int print_last_digit (int n)
{
	int lastDigit = n % 10;
	
	lastDigit = lastDigit * 11;

	return (lastDigit);
}
