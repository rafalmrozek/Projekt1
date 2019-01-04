#include<stdio.h>
#include<math.h>
int main() 
{
int rok;
printf("Podaj rok \n");
scanf("%d",&rok);
if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
  printf("Jest to rok przestepny");
    else
 printf("Nie jest to rok przestepny");



return 0;
}

