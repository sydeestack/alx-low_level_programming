#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase,
 * except for 'q' and 'e', followed by a new line.
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'a' && letter != 'q')
		{

			putchar(letter);
		}

	}
	putchar('\n');

	return (0);
}
