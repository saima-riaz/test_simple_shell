#include "shell.h"
/**
 * _getline2 - function that used to read a string or a line
 * @string: string to be printed
 * @size: size of string
 * @bytes_read: reader
 * Return: 0
 */
int _getline2(char **string, size_t size)
{
	ssize_t bytes_read;

	printf("$ ");

	bytes_read = getline(string, &size, stdin);
	if (bytes_read == -1)
	{
	perror("getline");
        return 1;
	}

	printf("entered: %s", *string);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
/**
 * _signal - function to handle signal
 * Return: 0
 */
int _signal(void)
{
	signal(SIGINT, SIG_IGN);

	while (1)
	
	{
	char *input = NULL;
        size_t size = 0;

	if (_getline2(&input, size) == 1)
        {

	continue; 
       
       	}
	free(input);

	}

	return (0);
}

