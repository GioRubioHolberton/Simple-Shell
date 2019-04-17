#include "holberton.h"
/**
 * search_path - function to searh in the path
 * @comand: command to be executed
 * Return: comand to execute
 */
char *search_path(char *comand)
{
	char **get_array = NULL, *result_execute = NULL;
	char *aux = NULL;

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
			/* result_execute = comand; */
			free(get_array);
			return ("NO");
		}
		aux = _strdup(result_execute);
		free(result_execute);
		free(get_array);
		return (aux);
	}
}
/**
 * _execute - function to execute comman
 * @path_comand: command to be executed
 * Return: comand to execute or NOT if no posible execute
 */
char *_execute(char **path_comand)
{
	int i, j;

	for (i = 0; path_comand[i] != NULL; i++)
	{
		if (access(path_comand[i], F_OK) == 0)
		{
			for (j = i + 1; path_comand[j] != NULL; j++)
				free(path_comand[j]);
			return (path_comand[i]);
		}
		free(path_comand[i]);
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
	char **str_tok, *s2 = NULL, *palabra = "PATH", *word = NULL,
		*s3 = NULL, *s4 = NULL, *auxs3 = NULL;

	lenght_palabra = _strlenght(palabra);
	while (environ[i] != NULL)
	{cont = 0;
		for (y = 0, j = 0; y < lenght_palabra; y++, j++)
		{
			if (environ[i][j] == palabra[j])
				cont++; }
		if (cont  == lenght_palabra)
		{str_tok = malloc(100 * sizeof(char *));
			for (j = 0; j < 100; j++)
				str_tok[j] = NULL;
			s2 = _strdup(environ[i]);
			strtok(s2, "=");
			word = strtok(NULL, "=");
			s3 = strtok(word, ":");
			auxs3 = _strdup(s3);
			s4 = _strcat(auxs3, "/");
			str_tok[0] =  _strcat(s4, comand);
			while (iterator)
			{s3 = strtok(NULL, ":");
				if (s3 == NULL)
					break;
				auxs3 = _strdup(s3);
				s4 = _strcat(auxs3, "/");
				str_tok[iterator] =  _strcat(s4, comand);
				iterator++;

			}
			for (j = iterator; j < 100; j++)
				free(str_tok[j]);
			break;
		}
		i++;
	}
	free(s2);
	return (str_tok);
}
