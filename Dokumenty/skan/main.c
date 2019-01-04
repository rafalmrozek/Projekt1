#include <stdio.h>
#include <stdlib.h>

int main()
{


    /***** LOSOWANIE TABLICY ******/
    srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
    int tab[20];                // deklaracja tablicy
    for (int i=0; i<20; i++)    // dla kazdego elementu
        tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19


    /***** Tutaj umieść rozwiązanie zadania ******/


    /***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/
    printf("tab = [");
    for (int i=0; i<19; i++)
        printf("%d, ", tab[i]);
    printf("%d]\n", tab[19]);
    int z,x,k;
    int max =0, min =19;
    scanf("%d",&x);

    for(z=0; z<20; z++)
    {
        if(tab[z] == x)
        {

            if(max < tab[z])
                max = tab[z];

            if( min > tab[z])
                min =tab[z];
        }
    }
    printf("max: %d \n", max);
    printf("min: %d \n", min);
    return 0;
}
