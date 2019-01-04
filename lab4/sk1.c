#include<stdio.h>

int main()
{
	printf("Wczytaj Liczbe: ");
	int n;
 	scanf("%d ", &n);
	int silnia =1;	

	while(n>0)
	{
	silnia *=n ;
	n--;

	printf("n: %d \n ", n);	
}
	
	printf("n! = %d", silnia);
	return 0;
}
