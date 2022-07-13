/*
 *Program: 6-abs.c
 *The programcomputes the absolute value of an integer
 *remember to include the standard library
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *
 *@n: The parameter to be evaluated with.
 *
 *Return:the absolute value of an integer;
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
