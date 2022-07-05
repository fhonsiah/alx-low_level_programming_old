/*
 *Program: 7-print_alphabet.c
 *The program prints the alphabets in lowercase,
 *in reverse folowed by a new line.
 *Author: Faustina Honiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point of the program.
 *initialize the variable with character datatype
 *declare the variable with the value 'z'
 *create a for loop to print the characters in reverse order
 *Return: 0 if the program runs smooth
 */
int main(void)
{
char ch = 'z';
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
