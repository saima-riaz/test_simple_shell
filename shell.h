#ifndef SHELL_H
#define SHELL_H
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>

/*------gobal variable-----*/
extern char **environ;

#define DELIMIT " \t\r\n\a"
#define PROMPT "$sa_team "
#define SIZE 1024
#define PATH_MAX 1020

/*----- prototypes shell_main.c-----*/
int _getline(void);
int _strtok(void);
void _fork(void);
void sig_handler(int signum);

/*------getline2---------*/
int _getline2(char **string, size_t size);

/*------_signal Function------*/
int _signal(void);

/*----- string function------*/
int _strlen(char *s);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
/*-------strtok function-------*/
int parse_string(char *str, const char *token);
#endif
