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
    int num1;
	int num2;
	int result;

	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
    
	result = num1 + num2;
	printf("sum of the entered numbers: %d", result);
	return result;
}
