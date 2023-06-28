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
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
