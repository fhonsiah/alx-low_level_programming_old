/*
 *Program: 8-24_hours.c
 *The program prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 *Author:Fautina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *void jack_bauer - prints the last digit of a number
 *
 *Return: Always 0.
 */
void jack_bauer(void)
{
	int hours;
	int hour_digit1;
	int hour_digit2;
	int minutes;
	int minute_digit1;
	int minute_digit2;

	for (hours = 0; hours < 24;)
	{
		hour_digit1 = hours / 10;
		hour_digit2 = hours % 10;
		for (minutes = 0; minutes < 60; minutes++)
		{
			minute_digit1 = minutes / 10;
			minute_digit2 = minutes % 10;

			_putchar(hour_digit1 + '0');
			_putchar(hour_digit2 + '0');
			_putchar(':');
			_putchar(minute_digit1 + '0');
			_putchar(minute_digit2 + '0');
			_putchar('\n');
		}
		minutes = 0; /* Reset minutes to get minutes starting from 0 */
	}
	hours++;
}
