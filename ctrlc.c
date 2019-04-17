#include "holberton.h"
/**
 * ctrl_c -  function to handle de sigint
 * @ctrl: number to interrup proccess
 * Return: Nothing
 */

void ctrl_c(int ctrl)
{
	if (ctrl != 0)
		write(STDOUT_FILENO, "\n", 1);
	fflush(stdout);
}
