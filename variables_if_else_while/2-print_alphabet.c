/*
 * File: 2-print_alphabet.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabet in lowercase
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++) putchar(ch);

	return (0);
}
