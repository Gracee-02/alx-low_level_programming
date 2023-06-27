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
	int sen;

	sen = *str;

	putchar(sen);
	putchar('\n');
}
