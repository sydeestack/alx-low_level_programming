#include <stdio.h>

/**
 * print_rev - Prints a string
 *
 * @s: Pointer to a string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Calculate length of the string */
	while (*(s + length) != '\0')
		length++;

	/* Print the string in reverse */
	for (i = length - 1; i >= 0; i--)
		putchar(*(s + i));

	putchar('\n');
}
