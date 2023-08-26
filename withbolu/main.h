#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <limits.h>
#include <time.h>

extern char **environ;

int _putchar(char c);
char *append_command(char *dir_path, char *cmd);
int exec(char **args);
int exist(char *path_name);
int fill_args(char *input, char **args);
void free_grid(char **grid, int heigth);
char *_getenv(char *glo_var);
void last_free(char *input);
int print_not_found(char **args, int counter);
int print_numbers(int n);
int _printp(const char *prmpt, unsigned int length);
int _strcmp(char *str1, char *str2);
char *_strdup(char *str);
int _strlen(const char *str);
int verify_blt(char **args, int status);
int verify_path(char **args);

#endif

