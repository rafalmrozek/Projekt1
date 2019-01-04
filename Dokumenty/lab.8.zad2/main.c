#include <stdio.h>
#include <stdlib.h>
void swap (int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
int main()
{
    int x , y;
    scanf("%d", &x);
    scanf("%d", &y);
    int *pw = &x;
    int *pe = &y;
    swap(pw , pe);
    printf("%d \n", x);
    printf("%d", y);
    return 0;
}
