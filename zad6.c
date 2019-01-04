#include <stdio.h>

int main()
{
unsigned int  n;
printf("Podaj liczbe n: ");
scanf("%u",&n);
if(n<2)
printf("Nie jest pierwsza \n");


	for(int i=2;i*i<=n;i++)
{
		if(n%i==0)
		{printf("Nie jest pierwsza \n");
		break;}
else
{printf("Jest to liczba pierwsza \n");
break;}
}


return 0;
}
