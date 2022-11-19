#include <stdio.h>
int main()
{
    int a = 5, b = 40, z = 20, max;
    max = (a > b) ? ((a > z) ? a : z) : ((b > z) ? b : z);
    printf("%d is the maximum", max);
    return 0;
}