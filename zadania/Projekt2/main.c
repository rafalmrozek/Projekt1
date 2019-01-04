#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int a=1; a<=n-2; a++)
        for(int b=a+1; b<=n-1; b++)
            for(int c=b+1; c<=n; c++)
            {

                printf("{");
                printf("%d,%d,%d",a,b,c);
                printf("}");
                printf("\n");

            }





    return 0;
}
