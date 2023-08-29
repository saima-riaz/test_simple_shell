#include "shell.h"
/*
* cleanup :Perform cleanup operations, e.g., close files, release resources
*
* Return: 0
*
*/

int _getline2(char **string, size_t *size);

void sig_handler(int signo)
{
    if (signo == SIGINT)
        printf("\nCaught SIGINT\n");

void cleanup(void) 
{
   
}

int main(void)
{
    
	atexit(cleanup);

	int st = 1;

	signal(SIGINT, sig_handler);
	while (st)
    {
        char *input = NULL;
        size_t size = 0;

        if (_getline2(&input, size) == 1)
        {
            continue; 
        }

        if (strcmp(input, "exit\n") == 0)
        {
            st = 0; 
            printf("Exiting shell...\n");
        }
        else
        {

        }

        free(input); 
    }

    return 0;
}
