/*
 *Program: 10-add.c
 This program adds two integers and
 *returns the result
 *Author:Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *int_add - function for adding numbers
 *
 *
 *
 *Return: result
 */
int add(int a, int b)
{
    int a;
	int b;
	int result;

	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
    
	result = a + b;
	printf("sum of the entered numbers: %d", result);
	return result;
}
