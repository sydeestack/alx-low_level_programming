/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, const char *src)
{
	char *dest_end = dest;

	while (*dest_end)
	{
		dest_end++;
	}

	while (*src)
	{
		*dest_end++ = *src++;
	}

	*dest_end = '\0';

	return (dest);
}
