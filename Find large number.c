#include <stdio.h>
int main( )
{
int a=10, b=25, c=7;
int max = a;
if (b > max) max = b;
if (c > max) max = c;
printf ("Largest: %d\n",max);
return 0 ;
}
