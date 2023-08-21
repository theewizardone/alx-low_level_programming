#include "main.h"

/**
 * _strlen - outputs the length of a str.
 * @s: enters stringeturn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
