#include "main.h"

/**
 * _puts - outputs a str, followed by a new line,
 * @str: pointer to the str to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
