#include "main.h"
/** 
 * 1-swap - to swap two pointers
 * @a: first number
 * @b: second pointer
 * Return: void 
 */

void swap(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
