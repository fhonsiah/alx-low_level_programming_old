/*
 *Program:  6-prints_numbers.c
 *The program prints all sinlge digit numbers of
 *base 10 starting from 0.
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point of the program
 *Initialize the variable to store the numbers
 *create a for loop to print the numbers
 *Return: 0 if the program runs smoothly
 */
int main(void)
{
int ch = '1';
for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
