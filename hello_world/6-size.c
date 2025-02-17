/*
 * File: 6-size.c
 */
#include <stdio.h>

/**
 * main - Prints "Various types
 *
 * Return: Always 0.
 */

int main(void){
	int intType;
	float floatType;
	double doubleType;
	char charType;
	unsigned int longInt;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longInt));
	printf("Size of a long long int: %zu bytes\n", sizeof(doubleType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
