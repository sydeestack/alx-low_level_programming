/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string of characters to accept
 *
 * Return: number of bytes in th
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (len);
	}
	return (len);
}
