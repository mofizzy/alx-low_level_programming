#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase except e and q
 * Return: 0 (success)
 */
int main(void)
{
char b = 'a';
char c = 'e';
char d = 'q';
while (b <= 'z')
{
if (b != c && b != d)
putchar(b);
b++;
}
putchar('\n');
return (0);
}
