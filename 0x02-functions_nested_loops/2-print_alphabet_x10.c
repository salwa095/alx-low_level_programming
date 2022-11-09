#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int n = 0;
char alpha;

while (n <= 9)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
n++;
_putchar('\n');
}
