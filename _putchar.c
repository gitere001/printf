#include "main.h"

/**
 * _putchar- Function
 *
 * Description: writes the character c  to the stdout
 *
 * @c: character to print
 *
 * Return: on success (1). on error (-1)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
