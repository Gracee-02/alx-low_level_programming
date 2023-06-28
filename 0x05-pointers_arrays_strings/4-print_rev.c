#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse followed by a ne line
 *
 * @s: string to be printed in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
