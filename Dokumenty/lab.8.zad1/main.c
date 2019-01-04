#include <stdio.h>
#include <stdlib.h>
void inc(int *a)
{
    *a= *a + 1;

}
int main()
{

int x;
scanf("%d", &x);
printf("%d", *x);
int *pt = &x;
inc(pt);
printf("%d", x);
    return 0;
}
