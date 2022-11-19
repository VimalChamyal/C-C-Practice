// Masking in action
// Here I've tried to set (change to 1) the 3rd bit from the RHS

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the number of your choice");
    scanf("%d", &x);

    y = x | 4;
    printf("The required number is %d", y);

    return 0;
}