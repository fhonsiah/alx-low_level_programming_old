/*
 *Program: 7-print_last_digit.c
 *The program prints the last digit of a number
 *returns the value of the last digit.
 *Author:Faustina Honsiah<fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *
 *@n: The parameter to be evaluated with.
 *
 *Return:the last digit of a number.
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		_putchar('0' + (-last_digit));
		return (-last_digit);
	}
}
