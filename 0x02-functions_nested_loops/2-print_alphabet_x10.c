#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return Return: x10 a-z
 */
void print_alphabet_x10(void);
{
int n;
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (n <= 9)
_putchar(alpha);
}
_putchat('\n');
}
