#include<stdio.h>

/*int main()
{
    int a[5], i;

    printf("Enter 5 integer numbers\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Array elements are:\n");
    for(i = 0; i < 5; i++)
        printf("%d\n", a[i]);

    return 0;
}*/

// Assign Array size using Macros//

#include<stdio.h>
#define N 5

int main()
{
    int a[N], i;

    printf("Enter %d integer numbers\n", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("Array elements are:\n");
    for(i = 0; i < N; i++)
        printf("%d\n", a[i]);

    return 0;
}
