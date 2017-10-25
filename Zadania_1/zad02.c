#include<stdio.h>
int main(){
  int a;
  int b;
  int c;
  int d;
  int suma;
  double srednia;
  int kwadrata;
  int kwadratb;
  int kwadratc;
  int kwadratd;
printf("Podaj pierwszą liczbę:\n");
scanf("%d",&a);
printf("Podaj drugą liczbę:\n");
scanf("%d",&b);
printf("Podaj trzecią liczbę:\n");
scanf("%d",&c);
printf("Podaj czwartą liczbę:\n");
scanf("%d",&d);
suma=a+b+c+d;
printf("Suma: %d\n",suma);
srednia=(double)(a+b+c+d)/4;
printf("Srednia: %f\n",srednia);
kwadrata=a*a;
kwadratb=b*b;
kwadratc=c*c;
kwadratd=d*d;
if(a<=b&&a<=c&&a<=d)
  printf("Najmniejsza liczba do kwadratu: %d\n",kwadrata);
if(b<=a&&b<=c&&b<=d)
  printf("Najmniejsza liczba do kwadratu: %d\n",kwadratb);
if(c<=b&&c<=a&&c<=d)
  printf("Najmniejsza liczba do kwadratu: %d\n",kwadratc);
if(d<=b&&d<=c&&d<=a)
  printf("Najmniejsza liczba do kwadratu: %d\n",kwadratd);

return 0;}
