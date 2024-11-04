#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: pointer
 * @s: char
 * @b: with the constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int index;
    unsigned char *memory = s, value = c;
    
   	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
