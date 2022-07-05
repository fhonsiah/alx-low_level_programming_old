/*
 *Program: 3-print_alphabets.c
 *The program prints the alphabets in lowercase, and then in uppercase
 *followed by a new line.
 *Author:Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point of the program.
 *initialize the variable with datatype char
 *Create a for loop to print the alphabet characters
 *in lowercase then in upper case.
 *Return: 0 means the code has smoothly run
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
