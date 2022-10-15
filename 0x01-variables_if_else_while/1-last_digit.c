#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - This function will  check if the last digit is positive or negative
* Return: Always 0
*
*/
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = (n % 10);

	if (m != 0 && m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	}
	else if (m != 0 && m < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, m);
	}
	return (0);
}
