#include "main.h"

/**
 * strlen - returns the length of a string
 * @strlen: provides a similar function
 *
 * return: void
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
