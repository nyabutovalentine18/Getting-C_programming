#include <stdio.h>

void main()
{
int a;

printf("Please input a number: ");
scanf("%d", &a);

if (a < 0)
{
printf("the number is negative\n");
}
else
{
printf("the number is positive\n");
}
}
