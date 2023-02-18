#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	int last_number;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("Last digit of %d is ", n);

	last_number = n % 10;

	if (last_number > 5)

		printf("%d and is greater than 5\n", last_number);

	else if (last_number == 0)

		printf("%d and is 0\n", last_number);

	else

		printf("%d and is less than 6 and not 0\n", last_number);

	return (0);
}
