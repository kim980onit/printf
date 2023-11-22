#include "main.h"

/**
 * _putchar -function that writes the character c to stdout
 * @c: parameter That character to print
 *
 * Return: 1 else return  -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
