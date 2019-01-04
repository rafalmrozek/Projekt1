#include<stdio.h>

int main()
{
 double n=1;
 double max=0 , min=0, suma,srednia;
 double liczba;
 printf("Podaj liczbe: ");
 scanf("%lf", &liczba);
 max = liczba;
 min = liczba;
 suma = liczba;
 srednia = liczba;

 while(liczba!=0) 
{
	printf("Podaj liczbe: ");
       	scanf("%lf", &liczba);

        if(liczba >max && liczba !=0 )
		max =liczba;
	if(liczba <min && liczba !=0 )
		min=liczba;
	suma +=liczba;
	n++;
}
 srednia = suma/n;
 printf("Suma: %lf \n", suma);
 printf("Srednia: %lf \n", srednia);
    if(suma != 0)
{
	printf("Max: %lf \n", max);
	printf("Min: %lf \n", min);
}
return 0;
}
