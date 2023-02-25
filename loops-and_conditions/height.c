#include <stdio.h>

void main()
{
int height;

printf("Please enter your height: ");
scanf("%d", &height);

if ((height >= 137) && (height <= 153))
{
printf("he is very short\n", height);
}
else if ((height >= 148) && (height <= 164));
{
printf("he is short\n", height);
}
else if ((height >= 154) && (height <= 170))
{
printf("he is rather short\n");
}
else
printf("he is tall\n", height);
}
