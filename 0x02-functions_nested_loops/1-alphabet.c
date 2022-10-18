#include "main.h"

/**
 * main - prints lowercase alphabets
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		print_alphabet(alpha);
		alpha++;
	}

	_putchar('\n');
}
