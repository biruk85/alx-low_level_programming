#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @size: size
 * @b: buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
int e, y, x;
e = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (e < size)
{
y = size - e < 10 ? size - e : 10;
printf("%08x: ", e);
for (x = 0; x < 10; x++)
{
if (x < y)
printf("%02x", *(b + e + x));
else
printf("  ");
if (x % 2)
{
printf(" ");
}
}
for (x = 0; x < y; x++)
{
int c = *(b + e + x);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
e += 10;
}
}
