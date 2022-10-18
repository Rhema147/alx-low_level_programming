#include "main.h"

/**
 * main - prints lowercase alphabets
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(alpha);
		ch++;
	}

	_putchar('\n');
}
