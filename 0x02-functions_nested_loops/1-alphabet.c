#include "main.h"
/**
 * print_alphabet - print letter  in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 1)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
