#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return 0 (success)
 */
int main(void)
{
char d;
for (d = '0'; d <= '9'; d++)
{
putchar(d);
}
for (d = 'a'; d <= 'f'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
