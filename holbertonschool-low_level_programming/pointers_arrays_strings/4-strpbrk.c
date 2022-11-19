#include "main.h"
/**
 * _strpbrk - scan the 1 first occurence of any character who is part of 2 and
 * return the character from 1.
 * @s: is the one who will be scanned
 * @accept: search between this list of character
 *
 * Return: s or null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] == accept[j])
		{
			return (s + i);
		}
	}
	return ('\0');
}
