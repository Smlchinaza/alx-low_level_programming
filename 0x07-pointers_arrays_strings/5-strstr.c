#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (heystack);
	}

	return (NULL);
}
