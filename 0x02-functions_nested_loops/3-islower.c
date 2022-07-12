/*
 *Program: 3-islowe.c
 This program checks for lower case character
 *returns 1 idf c is lowercase, and returns 0
 *otherwise
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *_islower - checks for lowercase
 *
 *@c: The parameter to be evaluated with.
 *
 *Return:1 if c is lowercase,0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
