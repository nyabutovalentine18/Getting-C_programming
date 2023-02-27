#include <stdio.h>

int main()
{
int n;
n = 98;
int *p;
p = &n;

printf("The address of n: %p\n", &n);
printf("The value of n: %p\n", p);
printf("The address of n: %d\n", *p);
printf("The address of p: %p\n", &p);
return (0);
}
