#include <stdio.h>
#include <string.h>
int main ()
{
        char name[10] = "Array user";
        int len ;
        len = strlen(name);

        printf("Length of string name : %d\n", len );
    //return 0;
//}
//int main()
//{
   int a = 20;
        printf("Size of variable a : %d\n",sizeof(a));
        printf("Size of int data type : %d",sizeof(int));
        printf("Size of char data type : %d",sizeof(char));
        printf("Size of float data type : %d",sizeof(float));
        printf("Size of double data type : %d",sizeof(double));
   return 0;
}

