#include "main.h"

/**
 * _memset - it fill a block of memory with connection
 * @s: a pointer to a memory area.
 * @b: the constant byte.
 * @n: the number byte of memory to be filled
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
