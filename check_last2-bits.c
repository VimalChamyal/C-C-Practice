// Program to check whether the last 2 bits of a number is set or not
#include <stdio.h>
int main()
{
    int x;

    printf("Enter a number of your choice \n");
    scanf("%d", &x);

    (x & 3) == 3 ? printf("%d is set", x) : printf("%d is not set", x);

    return 0;
}