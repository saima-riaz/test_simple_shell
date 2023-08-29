#include "shell.h"
/**
 * _getline - function that used to read a string or a line
 * Return: 0
 */
int _getline(void)
{
	char *string = NULL;
	size_t size = 0;
	ssize_t bytes_read = 0;
	int i;

	printf("$ ");

	bytes_read = getline(&string, &size, stdin);
	if (bytes_read == -1)
	{
	perror("getline");
	}
	else
	printf("entered: %s", string);
	}
	free(string);

	return (0);
}

/**
 * _strtok - function that used to read a string or a line
 * Return: 0
 */

int _strtok(void)
{
	char *input = NULL;
	size_t size = 0;
	ssize_t bytes_read = 0;
	
	printf("$ ");
	bytes_read = getline(&input, &size, stdin);
	if (bytes_read == -1)
	{
	perror("getline");
        return (0);
	}

	char *token = strtok(input, DELIMIT);
       	while (token != NULL)
       	{
        printf("%s\n", token);
        token = strtok(NULL, DELIMIT);
    }

    free(input);
    return (0);
}

/**
* _fork - creating a new process
*Return: void
*/
void _fork(void)
{
	char *argv[] = {"/bin/ls", "-l", ".", NULL};

	pid_t pid = fork();

	if (pid == 0)
	{
		execve(argv[0], argv, NULL);
	}
	else
	{
		wait(NULL);
	}
}
/**
* sig_handler - checks if Ctrl C is pressed by the input
* @signum: int
*Return: void
*/
void sig_handler(int signum)
{

	if (signum == SIGINT)
	{
		write(STDOUT_FILENO, "\n$ ", 3);
	}
}
/**
 *main - main function
 *Return: Always(0)
 */
int main(void)
{
        int st = 1;
	char *input = NULL;
	size_t size = 0;
	ssize_t bytes_read = 0;

        signal(SIGINT, sig_handler);

        while (st)
{
	printf("$ ");
	bytes_read = getline(&input, &size, stdin);
        if (bytes_read == -1)
        {
	perror("getline");
	continue;
	}
	if (strcmp(input, "exit\n") == 0)
	{
	st = 0;
	
	printf("exit shell \n");

	}
	
	else
	{
	
	_strtok();
	_fork();
                
	}
}

	free(input);

        return (0);
}
