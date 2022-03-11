#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 *main - Entery point
 */

int main (void)
{
<<<<<<< HEAD
int n;
srand(time(0));
n = rand() - RAND_MAX /2 ;
if (n > 0)
 printf("%d is positive\n",n);
else if (n == 0) 
 printf("%d is zero\n",n);
else
 printf("%d is negative\n",n);
return (0);
=======
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is positive\n", n);
	else if (n ==0)
		printf("%d is zero\n",n);
	else 
		printf("%d is negative\n",n);
	return (0);
>>>>>>> 36e9a7f4fcc30e08826935b92ba67dd5412f2da0
}
