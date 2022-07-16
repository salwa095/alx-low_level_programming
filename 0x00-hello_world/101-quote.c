#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
* Main - main block
* Description: prints exactly "and that piece of art is useful"
* Return: 0 is success
*/

int main(void)
{
int s = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");
write(1, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", s);
return (1);
}
