#include <stdio.h>

int main()
{
int a[9] = {32, 45, 44, 78, 35, 22, 47, 18, 99};
int i;
for (i = 0; i < 9; i++)
{
printf("%d", a[i]);
}
printf("\n");
for (i = 8; i > 0; i--)
{
printf("%d", a[i]);
}
return (0);
}
