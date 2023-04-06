#include <unistd.h>

/**
 * _putchar - write the caracter c to stdout
 * @c: Caracter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set apprpriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
