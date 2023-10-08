#include <stdio.h>
/**
*main - Entry point
*Description - print alphabet in lowercase and uppercase
*Return: always 0 (success)
*/
int main(void)
{
char n = 'a';
char m = 'A';
while (n <= 'z')
{
putchar(n);
}
while (m <= 'Z')
{
putchar(m);
}
putchar('\n');
return (0);
}
