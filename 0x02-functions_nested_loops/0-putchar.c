/*
 *Program: 0-putchar.c
 *The program prints _putchar, followed by a new line.
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *main - The entry point of the program.
 *Return:0 if the program runs without throwables.
 */
int main(void)
{
char text[] = "_putchar";
int i = 0;
while (i < 0)
{
_putchar(text[i]);
i++;
}
_putchar('\n');
return (0);
}
