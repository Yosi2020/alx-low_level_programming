#include "main.h"

/**
 * _strncpy - copies a string src to dest
 * strncpy() function
 * @dest: the varibale to strong copied string
 * @src: the string to be copied
 * @n: the number of bytes to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
  for ( int i = 0; src[i] != '\0' && i < n; i++)
    dest[i] = src[i];
  for (int i = 0; i< n; i++)
    dest[i] = '\0';
  return (dest);
}
