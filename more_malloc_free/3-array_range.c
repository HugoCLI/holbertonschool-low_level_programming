#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - point
 * @min: minimum of number
 * @max: maximum of number
 * Return: Always 1 (True) or 0 (False)
 */
int *array_range(int min, int max)
{
	int *mal;
	int index = 0;
	int seek = min;

	if (min > max)
		return (NULL);

	mal = malloc(sizeof(int) * max + 1);

	if (mal == 0)
		return (NULL);

	for (; seek <= max; seek++)
	{
		mal[index] = seek;
		index++;
	}
	return (mal);
}
