#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success (0)
 */
int main(void)
{
int num, num2;
for (num = 0; num < 9; num++)
{
for (num2 = num + 1; num2 < 10; num2++)
{
putchar((num % 10) + '0');
putchar((num2 % 10) + '0');
if (num == 8 && num2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
