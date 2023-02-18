#include <unistd.h>
#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int first_digit = 0;

	while (first_digit < 9)
	{
		int second_digit = first_digit + 1;

		while (second_digit <= 9)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');

			if (first_digit < 8 || second_digit < 9)
			{
				putchar(',');
				putchar(' ');
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);

}
