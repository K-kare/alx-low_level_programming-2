#include "main.h"
/**
* _strlen - returns the length of a string
* @str: the string to get the length of
* Return: the length of str.
*/
int _strlen(char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}
