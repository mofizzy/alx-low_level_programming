#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base sixteen
 * Return: 0 (success)
 */
int main(void)
{
int c = '0';
char b = 'a';
while (c <= '9')
{
putchar(c);
c++;
}
while (b <= 'f')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}

