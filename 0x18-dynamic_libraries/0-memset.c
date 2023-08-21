/*
 * File: 0-memset.c
 * Auth:Alfonce Morara
 */

#include "main.h"

/**
 * _memset - inserts the first no bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: pointer to the memory area to be filled.
 * @c:  char to fill the memory area with.
 * @n: no of bytes to be filled.
 * description _memset: over there
 *
 * Return: pointer to the filled memory area @s.
 *
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
