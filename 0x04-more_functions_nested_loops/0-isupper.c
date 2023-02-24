#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 * main - a function that checks for uppercase characters
 * Return: 1 if character is uppercase. 0 otherwise.
 */

int main(void)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
