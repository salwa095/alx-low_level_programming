#include<stdio.h>

/**
 * main  - Entry point
 * 
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
char b;
for (a = 0; a < 10; a++)
putchar((a%10) + '0');

for (b = 'a'; b <= 'f'; b++)
putchar(b);
putchar('\n');
return (0);
}
