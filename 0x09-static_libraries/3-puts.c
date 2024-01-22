#include "main.h"
/**
 * _puts- entry point
 * @str: Enter value
 * _putchar: enter value
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}

