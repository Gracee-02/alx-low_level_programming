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
	int i;

	sen = strlen(str);

	for (i = 0; i < sen; i++)
	{
		putchar(str[i]);
		putchar('\n');
	}
}
