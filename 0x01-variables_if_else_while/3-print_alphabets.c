#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
char b = 'a';
char c = 'A';
while (b <= 'z')
{
putchar(b);
b++;
}
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
