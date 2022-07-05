/*
 *Program: 5-print_numbers.c
 *The program prints all single digit numbers
 *of base 10 starting from 0
 *Author: Faustina Honsiah
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point of the program
 *Initialize a variable of datatype interger
 *Create a for loop to print the int within the range 
 *of base 10
 *print interger
 *Return: 0 always 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point of the program
 *Initialize the variable with datatype int
 *create a for loop to print the digits 
 *Return: 0 if the program runs smoothly.
 */

int main(void)
{
int number;
for (number = 0; number < 10; number++)
printf("%d",number);
putchar('\n');
return (0);
}
