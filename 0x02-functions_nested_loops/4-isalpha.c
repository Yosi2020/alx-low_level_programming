#include "main.h"

/**
 * isalpha - check the alpha char
 *
 * @c - chechked char
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || ( c>= 'A' && c<='Z'));
}
