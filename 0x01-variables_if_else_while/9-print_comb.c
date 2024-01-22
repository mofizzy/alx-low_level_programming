#include <stdio.h>
/**
 * main - a program that prints combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
int b = '0';
for (; b <= '9'; b++)
{
putchar(b);
if (b != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
