#include <stdio.h>
void arr(int x[][3]);  //function prototype
int main ()
{
   int a[2][3] = {{1,2,3}, {4,5,6}};   //initializing array
   int b[2][3] = {1, 2, 3, 4, 5};
   int c[2][3] = {{1, 2}, {4}};
   printf("values in array a by row:\n");
   arr(a);
   printf("values in array b by row:\n");
   arr(b);
   printf("values in array c by row:\n");
   arr(c);
   return 0;
}             // end of main
void arr(int x[][3])
{
   int i;      //row counter
   int j;      //column counter
   for (i = 0; i <= 1; ++i)
   {
      for (j = 0; j<= 2; ++j)
      {
         printf("%d", x[i][j]);
      }       //end of inner for
      printf("\n");
   }          //end of outer for
}
