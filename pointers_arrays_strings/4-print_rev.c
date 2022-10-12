#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - Entry point
 * @s : char of string
 * Return: Always 1 (True) or 0 (False)
 */
void print_rev(char *s)
{
	int len = 0;
	int t = 0;

	while (s[len] != '\0')
		len++;

	for (; t <= len; t++)
		_putchar(s[len - t]);

	printf("\n");
}
