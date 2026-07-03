#include <stdio.h>
int main ( )
{
int age;
printf("Enter age:");
scanf("%d",&age);
if (age>=18)
{
if (age>=65)
{
    printf("senior citizen and eligible to vote");
}
else
{
    printf("eligible to vote");
}
}
else
{
    printf ("not eligible to vote");
}
return 0;
}
