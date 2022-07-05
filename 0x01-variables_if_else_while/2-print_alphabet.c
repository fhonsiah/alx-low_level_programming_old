/*Program: 2-print_alphabet.c
 *The program prints the alphabets in lowercase,followed by a new line.
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point of the program.
 *Initialize a variable to store the characters
 *create a for loop to print the characters in rotation
 *Retrun: 0 if the program runs successfully
 **/

int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
