#include "shell.h"
/*
 * _exit:immediately terminates the process without performing normal cleanup
 * Return: 0
*/
	int _exit2(void)
{
	printf("Before exit\n");
	exit(0);
	printf("After exit\n");

	return (0);
}
