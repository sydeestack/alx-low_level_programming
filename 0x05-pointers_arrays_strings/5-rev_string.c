/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to a string
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/* Calculate length of the string */
	while (*(s + length) != '\0')
		length++;

	/* Reverse the string */
	for (i = 0; i < length / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + length - 1 - i);
		*(s + length - 1 - i) = temp;
	}
}
