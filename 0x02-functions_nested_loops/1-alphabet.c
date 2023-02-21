#include <stdio.h>
/**
 * main - a function that prints the alphabets, in lowercase
 * Return: Always 0
 */
int main(void)
{
	char print_alphabet(void);

	print_alphabet() = 'a';

	printf("Lowercase alphabets:\n");
	while (print_alphabet <= 'z')
	{
		printf("%c", print_alphabet);
		print_alphabet++;
	}
	return (0);
}
