#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (succcess)
 */
int main(void)
{
char d = 'a';
while (d <= 'z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
