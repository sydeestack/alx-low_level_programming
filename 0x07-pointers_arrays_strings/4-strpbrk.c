/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the set of bytes
 *
 * Return: pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
	}
	return (NULL);
}
