#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @n: num of array
 * @a: array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int x;
int y;
for (x = 0; x < n--; x++)
{
y = a[x];
a[x] = a[n];
a[n] = y;
}
}
