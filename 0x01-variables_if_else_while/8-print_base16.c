#include <stdio.h>
/**
 * main - entry point
 * 
 * Return: 0 Always (success/correct)
 */
int main(void)
{
char ch = 'a';
int i = 0;
while (i < 16)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(ch);
ch++;
}
i++;
}
putchar('\n');
return (0);
}
