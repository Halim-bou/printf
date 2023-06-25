#include "main.h"

/**
 * _write_char - writes the character to standar output
 * @c: character to print
 * Return: 1 or -1 on error
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
