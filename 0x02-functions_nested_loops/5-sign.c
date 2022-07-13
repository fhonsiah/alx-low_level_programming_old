/*
 *Program: 5-sign.c
 *The program that prints the sign of a number,
 *returns 1 and prints + if n is greater than zero,
 *returns 0 and prints 0 if n is zero,
 *returns -1 and prints - if n is less than zero
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *print_sign - prints the sign of a number
 *
 *@n: The parameter to be evaluated with.
 *
 *Return:1 and prints '+' if n is greater than zero,0 if n is zero,
 *and -1 and prints - if n is less than zero.
 */

 int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
