/*
 * File: 4-strpbrk.c
 * Auth:Alfonce Morara
 */

#include "main.h"

/**
 * _strpbrk - Looks for  a string for any of a set of bytes.
 * @s:  string to be searched.
 * @accept:  set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
