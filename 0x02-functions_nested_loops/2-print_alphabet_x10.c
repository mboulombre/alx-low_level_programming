#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 */
void print_alphabet_x10(void)
{
char charact;
int i;
i = 0;
while (i < 10)
{
charact = 'a';
while (charact <= 'z')
{
_putchar(charact);
charact++;
}
_putchar('\n');
i++;
}
}
