#ifndef _SHELL_H_
#define _SHELL_H_

extern char **environ;

#include <string.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ctrl_c(int ctrl);
char *_strcat(char *dest, char *src);
int execute_execve(char **comand);
char *_strdup(char *str_last);
int cont_word(char *palabra);
char **token(char *buff_word);
int _strcmp(char *s1, char *s2);
char **create_array();
char *search_path(char *comand);
int _strlenght(char *palabra);
char *_strncpy(char *path, char *comand);
char *_execute(char **path_comand);
void _free(char **w_get);

#endif
