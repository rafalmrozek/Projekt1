#include<stdio.h>


int main()
{
double a;
int b;
printf("Podaj podstawe: ");
scanf("%lf", &a);
printf("Podaj wylkadnik: ");
scanf("%d", &b);
double wynik =1;
while(b--)
{
wynik *=a;
}
printf("%lf", wynik);
return 0;
}
