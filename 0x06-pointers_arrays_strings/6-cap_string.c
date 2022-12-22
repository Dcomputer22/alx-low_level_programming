#include "main.h"
int is_sep(char c);
char cap_char(char c);
/**
 * cap_string - capitalizes all words of a string
 * @str: string whose words to capitalize
 * Sepratiors of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * Return: pointer to str whose words have been capitalized
 */
char *cap_string(char *str)
{
	int i;
	int sep_prev = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* check if the currentcharacter is a seperator */
		if (is_sep(str[i]))
		{
			sep_prev = 1;
		}
		/* check if the previous character was a seperator */
		else if (sep_prev)
		{
			str[i] = cap_char(str[i]);
			sep_prev = 0;
		}
	}
	/* capitalize the first character if string is non-empty */
	if (i > 0)
		str[0] = cap_char(str[0]);
	return (str);
}
/**
 * is_sep - check whether a given character is a seperator
 * @c: character to be checked
 * Seperators are: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * Return: 1 if c is a seperator. 0 otherwise
 */
int is_sep(char c)
{
	char seps[] = {' ', '\t', '\n', ',', '.', '!', '?', '\"', '(', ')',
		'{', '}'};
	int n = sizeof(seps) / sizeof(seps[0]);
	int i;

	for (i = 0; i < n; i++)
	{
		if (c == seps[i])
			return (1);
	}
	return (0);
}
/**
 * cap_char - gets the uppercase value of a character
 * @c: character whose uppercase value to find
 * Return: the uppercase value of c if c is in lowercase. Otherwise c
 */
char cap_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
