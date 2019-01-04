#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int a=0; a<n;a++)
    {
    for(int x=0; x<(n-a); x++)
    printf(" ");

    for(int y=1; y<=2*a+1; y++)
    printf("*");
    printf("\n");
    }


    return 0;
}
