#include <stdio.h>

void main()
{
int m;
int n;

printf("Please enter the value of m: ");
scanf("%d", &m);

if (m != 0)
if (m > 0)
n = 1;
else if (m < 0)
n = -1;
else
n = 0;
printf("the value of m is %d\n", m);
printf("the value of n is %d\n", n);
}
