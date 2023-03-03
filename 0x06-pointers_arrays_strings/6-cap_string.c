/**
 * cap_string - capitalizes all words of a string
 *
 * @str: the string to capitalize
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
        int i;
        char *ptr = str;

        /* Capitalize first letter */
        if (*ptr >= 'a' && *ptr <= 'z')
                *ptr -= 'a' - 'A';

        /* Capitalize subsequent letters after a separator */
        for (i = 1; str[i]; i++)
        {
                if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
                     str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
                     str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
                     str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
                     str[i - 1] == '}') &&
                    (str[i] >= 'a' && str[i] <= 'z'))
                {
                        str[i] -= 'a' - 'A';
                }
        }
        return str;
}
