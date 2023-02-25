#include <stdio.h>

int main(void)
{
int a;
int b;

printf("please enter values for a and b:");
scanf("%d %d\n", &a, &b);

if (a == b)
{
printf ("the numbers a and b are equal\n");
}
else
{
printf("the numbers a and b are not equal\n");
}
return (0);
}
