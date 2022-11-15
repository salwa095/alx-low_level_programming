#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * Return: returns last value of the digit
 */
int print_last_digit(int b)
{
int s;
s = (b % 10);
_putchar(s + '0');
return (s);

