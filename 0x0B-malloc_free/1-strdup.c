#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 * as a parameter.
 *
 * @str: string
 *
 * Return: pointer to space in memory or NULL
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while str[i]
		i++;
	s = (char *)malloc(i * sizeof(char) + 1);
	id(s == NULL)
			return (NULL);
			while (j < i)
			{
				s[j] = str[j]
					j++;
			}
			s[j] = '\0'
				return (s);
}

