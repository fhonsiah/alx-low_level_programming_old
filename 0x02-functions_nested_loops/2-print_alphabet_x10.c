/*
 *Program: 2-print_alphabet_x10.c
 *The program prints 10 times the alphabet,
 *in lowercase,followed by a new line
 *Author:Faustina Honsiah
 */
#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: doesn't return anything. 
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int counter = 1;
	while (counter <= 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		counter++;
		alphabet = 'a';
		_putchar('\n');
	}
}
