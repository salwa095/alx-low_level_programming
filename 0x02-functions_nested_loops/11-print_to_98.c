#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * Return: all natural numbers
 */
void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
_putchar('\n');
}
}
