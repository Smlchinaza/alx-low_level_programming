#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 * main - a function that checks for uppercase characters
 * Return: 1 if character is uppercase. 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
