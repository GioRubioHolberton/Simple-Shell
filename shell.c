#include "holberton.h"
/**
 * main - entri point the shell
 * @void: no paramters accepted
 * Return: integer
 */
int main(void)
{
	char *buff_word = NULL, **w_get = NULL, *aux_word = NULL,
		*str_ptr = "exit";
	size_t bufsize = 0;
	int i = 1, r_current = 0;

	while (i != -1)
	{
		buff_word = NULL;
		bufsize = 0;
		signal(SIGINT, SIG_IGN);
		i = getline(&buff_word, &bufsize, stdin);
		if (_strcmp(buff_word, str_ptr) == 0)
			break;
		if (i != 1 && i != -1)
		{
			w_get = token(buff_word);
			aux_word = w_get[0];
			w_get[0] = search_path(w_get[0]);
			if (_strcmp(w_get[0], "NO") == 0)
				continue;
			if (_strcmp(w_get[0], aux_word) == 0)
				r_current =  access(aux_word, F_OK);
			if (_strcmp(w_get[0], aux_word) == 0 && r_current != 0)
			{
				perror(" --Error:");
				free(buff_word);
				continue;
			}
			execute_execve(w_get);
			/*free(buff_word);*/

		}
	}
	_free(w_get); /*libera token*/
	free(buff_word);
	return (0);
}
