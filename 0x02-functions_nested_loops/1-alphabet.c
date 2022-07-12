/*
 *Program: 1-alphabet.c
 *The program prints the alphabet,in lowercase,
 *followed by a new line with a function
 *Author:Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - print alphabet
 *Declare variable char
 *create while loop with condition
 *use putchar to print alphabet in sequence
 *print new line
 */
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
