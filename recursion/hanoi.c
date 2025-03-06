/*
 * File: hanoi.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * hanoi - Move disk from source to target 
 *
 * @n: Number of disk
 * @source: first position
 * @target: last position
 * @aux: helping column
 *
 *
 */

void hanoi(int n, char source, char target, char aux)
{
	if (n == 0)
	{
		return;
	}

	hanoi(n-1, source, aux, target);
	printf("Déplacer disque %d de %c à %c\n", n, source, target);
	hanoi(n-1, aux, target, source);
}
