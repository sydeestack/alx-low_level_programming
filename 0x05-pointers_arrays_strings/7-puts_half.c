#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line
 *
 * @str: The input string
 *
 * Return: void
 */
void puts_half(char *str)
{
    int len = 0;
    int i;

    /* Calculate the length of the string */
    while (str[len] != '\0')
    {
        len++;
    }

    /* Calculate the starting index for printing the second half of the string */
    if (len % 2 == 0)
    {
        i = len / 2;
    }
    else
    {
        i = (len - 1) / 2;
    }

    /* Print the second half of the string */
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }

    putchar('\n');
}
