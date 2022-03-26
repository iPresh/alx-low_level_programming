#include <stdio.h>
/**
* main - entry point
*
* Return: 0 if success
*/
int main(void)
{
for (int i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
