#include "main.h"

/**
 * _putchar - prints _putchar then a new line 
 * Return: always false
 */


int _main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);


}
