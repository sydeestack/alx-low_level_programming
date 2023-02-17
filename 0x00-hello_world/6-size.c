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

	printf("The size of a char: %d byte(s)\n", (unsigned int)sizeof(b));
	printf("The size of a int: %d byte(s)\n", (unsigned int)sizeof(i));
	printf("The size of a long: %d byte(s)\n", (unsigned int)sizeof(num));
	printf("The size of a long long: %d byte(s)\n", (unsigned int)sizeof(num2));
	printf("The size of a float: %d byte(s)\n", (unsigned int)sizeof(amount));

	return (0);
}
