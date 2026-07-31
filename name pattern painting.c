#include <stdio.h>
int main ( )
{
 int row,col;
 for (row=1;row<=5;row++)
 {
     for(col=1;col<=7;col++)
     {
         if(col==1||col==7||(row==col&&row<=4)||(row+col==8&&row<=4))
            printf("*");
         else
            printf(" ");
     }
     printf("\n");
 }
 return 0;
}
