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
