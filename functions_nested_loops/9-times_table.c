#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int multiplier = 0;

	for (; multiplier < 10; multiplier++)
	{
		int c = 0;
		for (; c < 10; c++)
		{
			int result = c * multiplier;
			if (result < 10)
			{
				printf(" ");
			}
			printf(" %i,", result);

		}
		printf("\n");

	}

}