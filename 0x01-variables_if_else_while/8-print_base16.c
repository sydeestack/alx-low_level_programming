#include <unistd.h>
#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num = 0;

	char hex_digits[] = "0123456789abcdef";

	while (num < 16)
	{

		putchar(hex_digits[num]);
		num++;
	}

	putchar('\n');

	return (0);
}
