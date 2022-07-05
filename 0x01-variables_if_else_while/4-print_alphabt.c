/*
 *Program: 2-print_alphabet.c
 *The program prints the alphabets in lowercase,
 *except for q and e followed by a new line
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point of the program.
 *initialize the variable with datatype char
 *Create a for loop to print the alphabets
 *inside for loop put a condition so as to exclude letter q and e
 *and print a new line
 *Return: 0 always if code has run smoothly.
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
continue;
putchar(ch);
}
putchar('\n');
return (0);
}
