#include "holberton.h"
/**
 * search_path - function to searh in the path
 * @comand: command to be executed
 * Return: comand to execute
 */
char *search_path(char *comand)
{
	char **get_array = NULL, *result_execute = NULL;

	if (comand == NULL)
	{
		result_execute = "NO";
		return (result_execute);
	}
	else
	{
		get_array = create_array(comand);
		result_execute = _execute(get_array);
		if (_strcmp(result_execute, "NO") == 0)
		{
			result_execute = comand;
		}
		free(get_array);
		return (result_execute);
	}
}
/**
 * _execute - function to execute comman
 * @path_comand: command to be executed
 * Return: comand to execute or NOT if no posible execute
 */
char *_execute(char **path_comand)
{
	int i;

	for (i = 0; path_comand[i] != NULL; i++)
	{
		if (access(path_comand[i], F_OK) == 0)
		{
			return (path_comand[i]);
		}
	}
	return ("NO");
}

/**
 * create_array - function to create array pointers with the path
 * @comand: string
 * Return: array string with the path
 */
char **create_array(char *comand)
{
	int i = 0, lenght_palabra = 0, cont = 0, j, y, iterator = 1;
	char **str_tok, *palabra = "PATH", *word;
	char *s2 = NULL;

	lenght_palabra = _strlenght(palabra);
	str_tok = malloc(100 * sizeof(char *));

	while (environ[i] != NULL)
	{
		cont = 0;
		for (y = 0, j = 0; y < lenght_palabra; y++, j++)
		{
			if (environ[i][j] == palabra[j])
				cont++;
		}
		if (cont  == lenght_palabra)
		{
			s2 = _strdup(environ[i]);
			word =  strtok(s2, "=");
			word = strtok(NULL, "=");
			word = strtok(word, ":");
			s2 = _strncpy(word, "/");
			str_tok[0] =  _strncpy(s2, comand);
			free(s2);
			while (word != NULL)
			{
				word = strtok(NULL, ":");
				s2 = _strncpy(word, "/");
				str_tok[iterator] =  _strncpy(s2, comand);
				free(s2);
				iterator++;
			}
			break;
		}
		i++;
	}
	return (str_tok);
}
