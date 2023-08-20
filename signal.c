#include "shell.h"
/**
 *my_signal - signal handler
 *@sig: signal to be handled
 *Return : 0
 */

void my_signal() 
{
	flag = 1;
}
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	signal(SIGINT, my_signal);

	while (!1)
	{
	printf("waiting signal \n");
	}
	
	return (0);
}
