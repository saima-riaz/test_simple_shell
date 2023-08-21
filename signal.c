#include "shell.h"
/**
 *my_signal - signal handler
 *@sig: signal to be handled
 *Return : 0
 */

void my_signal() 
{
	my_flag = 1;
}
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	signal(SIGINT, my_signal);
	while (1)
		if (my_flag)
		{
			my_flag = 0;
		}
	return (0);
}
