#include<stdio.h>

int main()
{
unsigned int n;
printf("Podaj liczbe naturalna: ");
scanf("%u",&n);
for(int i=0; i<=n; i=i+3)
{

printf("%d \n",i);

}

return 0;
}
