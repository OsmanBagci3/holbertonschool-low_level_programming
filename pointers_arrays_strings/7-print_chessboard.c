/*
 * File: 7-print_chessboard.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_chessboard - Prints chessboard
 *
 * @a: Paramatre dentree
 *
 */

void print_chessboard(char (*a)[8])
{
	char s;
	int i;
	int j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
