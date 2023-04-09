#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program.
 *
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * @return - Always returns 0 to indicate success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return 0;
}
