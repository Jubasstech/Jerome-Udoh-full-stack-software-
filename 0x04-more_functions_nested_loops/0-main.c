#include "main.h"
#include <stdio.h>
/**
* main - check the code for Jerome Udoh in task 0x04-more_functions_nested_loops.
*
* Return: Always 0.
*/
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
