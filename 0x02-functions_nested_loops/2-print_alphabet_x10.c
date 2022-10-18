#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabetsbets times ten
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;
	i = 0;
	while (i <= 9)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}	
