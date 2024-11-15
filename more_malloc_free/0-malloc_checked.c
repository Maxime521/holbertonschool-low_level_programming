#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - fucntion that allocate memory with malloc
 * @b: size of malloc
 * Return: exit 98 or alloc
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
return (a);
}
