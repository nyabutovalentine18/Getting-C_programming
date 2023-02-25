#include <stdio.h>

void main()
{
int age;
printf("Please enter your age: ");
scanf("%d", &age);

if (age >= 18)
{
printf("Ready to CAST vote");
}
else if (age > 0 && age < 18)
{
printf("Not readyu to cast vote\n");
}
else
{
printf("please enter valid age\n");
}
}
