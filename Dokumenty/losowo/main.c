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
    int x;
    int max = tab[0];int min= tab[0];
    for(x=0; x<20 ; x++)
    {
        if(max < tab[x])
            max = tab[x];


    if( min > tab[x])
        min =tab[x];
        }
    int sr =0 ;
    int k;
    for(k=0; k<20; k++)
    {
        sr= sr + tab[k];
    }
    sr= sr/20;
    printf("max: %d min: %d sr: %d",max,min,sr);
}
