#include<stdio.h>

int main()
{
int  wiek;
printf("Podaj swoj wiek: ");
scanf("%d",&wiek);
int x;
x=18-wiek;
if(wiek>=18)
printf("Jestes pelnoletni");
else
printf("Bedziesz pelnoletni za: %d ", x);


return 0;

}
