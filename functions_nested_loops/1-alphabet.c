#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
