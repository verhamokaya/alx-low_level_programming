#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of char and initialize
 * it with specific char
 * @size: size
 * @c: character
 *
 * Return: size == 0 ? NULL : array pinter
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size ==0)
		return (NULL);
	s = (char*)malloc(size * sizeof(char));
	if (s ==NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
