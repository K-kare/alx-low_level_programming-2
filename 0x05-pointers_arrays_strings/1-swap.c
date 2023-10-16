#include "main.h"
/**
*swap_int - swaps the value of two integers
*@a: first integer to be swapt
*@b: second integer to be swapt
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
