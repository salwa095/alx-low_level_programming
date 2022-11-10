#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *
 * Return 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
char c='a';
if (islower(c))
{
_putchar(c);
return (0);
}
_putchar('\n');
}
