#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fib[n];
    scanf("%d", &n);
    if(n<40)
    {
    fib[0]= 0;
    fib[1] = 1;
    for(int a=2; a<n; a++)

    {
        fib[a]=fib[a-1]+fib[a-2];
    }
    for(int i =0; i<n; i++)
    printf("fib(%d) = %d\n",i,fib[i]);
    }
    return 0;
}
