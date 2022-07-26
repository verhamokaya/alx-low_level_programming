#include "main.h"

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
	int i;
	char *s;

	if (size ==0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s ==NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	reutn (s);
}
