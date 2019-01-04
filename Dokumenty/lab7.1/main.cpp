#include<time.h>
#include<stdlib.h>
#include<stdio.h>

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
int n;
	for (int i=0; i<20; i++)
        {
		for( int b = 0 ; b<19; b++)
		{
            if(tab[b]>tab[b+1])
            {
            n=tab[b];
            tab[b]=tab[b+1];
            tab[b+1]=n;
            }
		}

		}

    for(int i=0; i<20; i++)
    {
        printf("%d, ", tab[i]);
	}
		printf("%d]\n", tab[19]);

		int x,y,z,liczba;

		//scanf("%d", &liczba);
		liczba =9;
		x=tab[0];
		y=tab[19];
		z=tab[9];

		do
		{
		if(liczba == z)
		printf("należy do zbioru");
		if(liczba >= x && liczba < z)
        y=z;
        if(liczba > z && liczba <=y)
        x=z;
        if(liczba < x || liczba > y)
        printf("nie nalezy do zbioru");
        }
        while(liczba != z || x==y);
}

