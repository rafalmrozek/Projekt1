#include<stdio.h>

int main()
{


int liczba, wynik=0;
printf("Podaj liczbe: ");
scanf("%d", &liczba);

while (liczba >0)
{
wynik += liczba%10;
liczba = liczba/10;
}
printf("Wynikiem jest: %d",wynik);
return 0;
}
