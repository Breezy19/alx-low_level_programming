#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * @return - Always returns 0 to indicate success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}
