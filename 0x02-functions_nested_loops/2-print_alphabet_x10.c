#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i = 0;
while(i<10)
{
char eyu = 'a';
while(eyu <= 'z')
{
 _putchar(eyu);
eyu++;
}
_putchar('\n');
i++;
}
}
