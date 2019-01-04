#include <stdio.h>
int main()
{

char *im1 = "Adrian";
int lat1 = 20;
double wz1 = 1.83;
char *im2 = "Ania";
int lat2 = 120;
double wz2 = 12.8;



printf("| %-20s|%20d|%10g|", im1, lat1, wz1);
printf("| %20-s|%20d|%10g|", im2, lat2, wz2);
return 0;
}
