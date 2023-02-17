#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char b;
	long num;
	long long num2;
	float amount;

	printf("Size of a char: %d byte(s)\n", (unsigned int)sizeof(b));
	printf("Size of a int: %d byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long: %d byte(s)\n", (unsigned int)sizeof(num));
	printf("Size of a long long: %d byte(s)\n", (unsigned int)sizeof(num2));
	printf("Size of a float: %d byte(s)\n", (unsigned int)sizeof(amount));

	return (0);
}
