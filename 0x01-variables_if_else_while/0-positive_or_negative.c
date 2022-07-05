/*
 *Program: 0-positive_or_negative.c
 *The program prints whether the number stored in the variable n is positive
 *or negative.
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point of the program.
 *Return: 0 if the program runs without errors.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is zero\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);
return (0);
}
