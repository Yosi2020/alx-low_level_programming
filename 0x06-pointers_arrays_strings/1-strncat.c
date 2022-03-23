#include "main.h"
/** 
 * _strncat - concatenates n numbers of characters from src to dest
 * @dest: destination string
 * @src: the souce tobe concatenated
 * @n: the number of byte of src to be concatebated to dest
 * Return: dest.
 */

char *strncat(char *dest, char *src, int n)
{
  int len;
  char *ptr;
  
  for (len =0; dest[len] != '\0'; len++)
    ;
  prt = dest + len;
  
  while (*src != '\0' && n--)
    *ptr++ = *src++;
  *ptr = '\0';
  return (dest);
}
