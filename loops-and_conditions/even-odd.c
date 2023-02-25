#include <stdio.h>

int main(void)
{
int a;
int b;

printf("please enter the number to be checked: ");
scanf("%d", &a);

b = a % 2;
if (b == 0)
{
printf("the number is even\n");
}
else
{
printf("the number is odd\n");
}
return (0);
}
