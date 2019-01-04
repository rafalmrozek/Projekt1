#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int tab[n];
    int a,b,c;
    for (c=0; c<n; c++)
    {
        tab[c] = c;
        printf("%d", tab[c]);
    }
    printf("\n");
    for(a=0; a<n ; a++ )
    {


        for(int b=1; b*b<n; b++)
        {
            if(tab[a]%b==0)
            {
                break;
            }

            else
            {
                printf("%d ", tab[a]);
                break;
                }
        }
    }


    return 0;
}
