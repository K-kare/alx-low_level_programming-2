#include <stdio.h>
#include "main.h"
/**
*main - prints the number of args
*@argc: arguement count
*@argv: arguement vector
*Return: Always zero
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
