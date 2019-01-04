#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int tab[10][10];
    int tabela[10];
    for(int i = 0; i<10; i++)
        tabela[i] = 0;

    for(int i =0; i <10; i++)
    {
        for(int a=0; a<10; a++)
        {

            tab[i][a]= rand()%10;
            tabela[i] += tab[i][a];
        }
    }

    for(int i =0; i <10; i++)
    {
        for(int a=0; a<10; a++)
        {
            printf("%d ",tab[i][a]);
        }
        printf("\n");
    }
    int max =0;
    for(int i = 0; i<10; i++)
    {
        printf("%d \n",tabela[i]);
        if(tabela[i] > max)
            max = tabela[i];
    }
    printf("max: %d \n", max);
    for(int i = 0; i<10; i++)
    {
        if(tabela[i]==max)
            printf("%d", i);
    }

    return 0;
}
