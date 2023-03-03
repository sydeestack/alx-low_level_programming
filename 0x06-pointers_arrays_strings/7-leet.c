#include <stdlib.h>
#include <string.h>

/**
 * leet - encodes a string into 1337.
 * @str: the string to encode.
 *
 * Return: a newly allocated string containing the encoded version of str.
 */
char *leet(char *str)
{
	static const char *leet_chars[] = {"4", "3", "0", "7", "1"};
	static const char normal_chars[] = "aAeEoOtTlL";
	char *result = malloc(strlen(str) + 1);
	int i, j;

	for (i = 0, j = 0; str[i]; i++, j++)
	{
		if (str[i] == normal_chars[j])
		{
			strcat(result, leet_chars[j / 2]);
		j++;
		}
		else
		{
			strncat(result, &str[i], 1);
		}
	}

	return (result);
}
