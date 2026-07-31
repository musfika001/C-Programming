#include <stdio.h>
int main ( )
{
 int row,col;
 for (row=0;row<4;row++)
 {
     for(col=0;col<7;col++)
     {
         if(col>=3 - row&&col<=3 + row)
            printf("*");
         else
            printf(" ");
     }
     printf("\n");
 }
 return 0;
}
