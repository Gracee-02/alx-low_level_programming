#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string followed by a new line
 * @str: the variable storing the string
 *
 * Return: nothing
 *
 */

void _puts(char *str)
{
	char sen;

	sen = *str;
	_putchar(sen);
	putchar('\n');
}
