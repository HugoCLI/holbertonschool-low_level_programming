#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * @c: input int
 *
 * Return: Always 1 (True) or 0 (False)
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		printf("--%i--", (c * -1) % 10);
		return ((c * -1) % 10);
	}
	printf("__%i__", c%10);
	return (c % 10);
}
