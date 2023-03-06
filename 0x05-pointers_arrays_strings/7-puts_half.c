#include <stdio.h>
#include <string.h>

/**
 * example_function - brief description of what the function does
 *
 * @param1: description of the first parameter
 * @param2: description of the second parameter
 *
 * Return: description of the return value (if any)
 */
int example_function(int param1, char *param2)
{
	/* Declare variables with a single declaration per line */
	int i, j;

	/* Use spaces to separate operators and after commas */
	i = param1 + 2;
	j = strlen(param2);

	/* Use a newline before a curly brace, and always use braces */
	if (i > 10)
	{
		printf("i is greater than 10\n");
	}
	else
	{
		printf("i is less than or equal to 10\n");
	}

	/* Use a space after keywords like if, while, for, etc. */
	for (int k = 0; k < j; k++)
	{
		/* Use tabs for indentation */
		if (param2[k] == ' ')
		{
			printf("Space found at position %d\n", k);
		}
	}

	/* Use a blank line to separate logical blocks of code */
	printf("\n");

	/* Always include a return statement at the end of a function */
	return (i * j);
}
