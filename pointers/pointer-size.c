#include <stdio.h>

/**
* main - printing the size, in bytes, of a pointer
*
* Return: Always 0.
*/

int main()
{
int *p;

printf("The size of the pointer: %lu\n", sizeof(p));
printf("The addres of the pointer: %p\n", &p);
return (0);
}
