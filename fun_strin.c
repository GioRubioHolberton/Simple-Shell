#include "holberton.h"
/**
 * _strcmp - comparate two strings
 *@s1: Pointer one to comparate
 *@s2: Pointer two to comparate
 * Return: Always 0 (Success)
 */
int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/**
 * _strncpy - copy string to new dest
 * @s1: where the string is being assigned
 * @s2: fingered command.
 * Return: pointer to destination
 */
char *_strncpy(char *s1, char *s2)
{
	char *p;
	unsigned int i;
	unsigned int size_s1, size_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size_s1 = 0; *(s1 + size_s1) && s1; size_s1++)
	{
	}
	for (size_s2 = 0; *(s2 + size_s2) && s2; size_s2++)
	{
	}
	p =  malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size_s1 + size_s2; i++)
	{
		if (i < size_s1)
			p[i] = *(s1 + i);
		else
			p[i] = *(s2 + i - size_s1);
	}
	p[i] = '\0';
	return (p);
}

/**
 * _strlenght - get the size of a string
 * @string_ptr: string passed
 * Return: integer
 */
int _strlenght(char *string_ptr)
{
	int i;

	for (i = 0; string_ptr[i] != '\0'; i++)
	{}
	return (i);
}


/**
 * _strdup - function returns pointer to new string
 * @str: string that is being passed
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		i++;
	copy = malloc(1024 * sizeof(char));
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	while (j <= i)
	{
		copy[j] = str[j];
		j++;
	}
	return (copy);
}
