#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main -Positive anything is better than negative nothing
*Return : always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
		print("%d is positive\n , n);
	else if(n==0)
		print("%d is zero\n , n);
	else 
		print("%d is negative\n , n);

	return (0);
}
