#include "main.h"
/** _strlen - is used for printing the length of a string
 * @s: pointer
 * Return: void
 */

int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
