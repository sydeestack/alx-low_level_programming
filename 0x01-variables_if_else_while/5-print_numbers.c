#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i;

	i = 0;

	while (i < 10)
	{

		char c = i + '0';

		write(STDOUT_FILENO, &c, 1);

		i++;
	}

	write(STDOUT_FILENO, "\n", 1);

	return (0);
}
