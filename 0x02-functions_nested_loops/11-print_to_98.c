#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * Return: all natural numbers
 */
void print_to_98(int n)
{

if (n <= 98)
{
while (n < 98)
printf("%d", n++);
printf(" , ");
printf(" ");
printf("%d\n", n);
}
else
{
while (n > 98)
printf("%d", n--);
printf("%d", n);
printf(" , ");
printf(" ");
}
}
