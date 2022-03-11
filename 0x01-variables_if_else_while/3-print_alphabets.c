#include <stdio.h>

/**
 * main -entry point
 *
 * Return: always 0
 */
int main(void)
{
char x = 'a', y = 'A';

for (; x <= 'z'; x++)
  putchar(x);
for (; y <= 'z'; y++)
  putchar(y);
putchar('\n');
return (0);
}
