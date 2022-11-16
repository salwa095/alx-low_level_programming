#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @b: passed argument
 * Return: returns last value of the digit
 */
int print_last_digit(int b)
{
int s;
if (b < 0)
b = -b;
s = b % 10;
_putchar(s + '0');
return (s);
}
