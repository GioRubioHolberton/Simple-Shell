#include "holberton.h"
/**
 * main - entri point the shell
 * @void: no paramters accepted
 * Return: integer
 */
int main(void)
{char *buff_word = NULL, **w_get = NULL, *aux_word = NULL,
		*str_ptr = "exit", *aux = NULL, *aux2 = NULL, *res = NULL;
	size_t bufsize = 0;
	int r_current = 0, i = 0, j = 0;

	while (i != -1)
	{buff_word = NULL;
		signal(SIGINT, SIG_IGN);
		i = getline(&buff_word, &bufsize, stdin);
		if (i == -1)
			break;
		aux = malloc(sizeof(char) * (i + 1));
		for (j = 0; j < i; j++)
			aux[j] = buff_word[j];
		aux[j] = '\0';
		aux2 = strtok(aux, " ");
		if (_strcmp(aux2, str_ptr) == 0)
		{free(aux);
			break; }
		if (i != 1 && i != -1)
		{w_get = token(buff_word);
			aux_word = w_get[0];
			res = search_path(w_get[0]);
			if (_strcmp(res, "NO") == 0)
			{execute_execve(w_get);
				free(aux);
				free(buff_word);
				free(w_get);
				continue; }
			if (_strcmp(res, aux_word) == 0)
				r_current =  access(aux_word, F_OK);
			if (_strcmp(res, aux_word) == 0 && r_current != 0)
			{perror(" --Error:");
				free(buff_word);
				free(aux);
				continue; }
			w_get[0] = res;
			execute_execve(w_get);
			free(w_get); }
		free(aux); }
	free(buff_word);
	return (0); }
