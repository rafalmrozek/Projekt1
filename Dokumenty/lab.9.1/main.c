#include <stdio.h>
#include <stdlib.h>

int main()
{
    void swap (int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }


    int tab[20];
    for(int a =0; a<20; a++)
    {
        tab[a]= rand()%10;
        printf("%d ", tab[a]);
    }

    printf("\n");

    for(int e=10; e>0; e--)
    {
    int z=0;
        for(int n =0; n <e ;n++ )
        {
            if(tab[e+n] > tab[n+1]);
            {
            swap(&tab[e+n], &tab[n+1]);
            }
        }
    }
for(int n =0; n <20 ;n++ )
        {
            printf("%d ",tab[n]);
        }


    return 0;
}
