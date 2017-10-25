#include<stdio.h>
int main(){
int a;
int b;
int c;
int d;

printf("Podaj pierwszą liczbę\n");
scanf("%d",&a);
printf("Podaj drugą liczbę: \n");
scanf("%d",&b);
printf("Podaj trzecią liczbę: \n");
scanf("%d",&c);
printf("Podaj czwartą liczbę: \n");
scanf("%d",&d);
if(a>=0 && a>=b && a>=c &&a>=d)
  printf("Największa liczba większa, lub równa zeru to: %d\n",a);
if(b>=0 && b>=a && b>=c &&b>=d)
  printf("Największa liczba większa, lub równa zeru to: %d\n",b);
if(c>=0 && c>=b && c>=a &&c>=d)
  printf("Największa liczba większa, lub równa zeru to: %d\n",c);
if(d>=0 && d>=b && d>=c &&d>=a)
  printf("Największa liczba większa, lub równa zeru to: %d\n",d);
if(a<0&&b<0&&c<0&&d<0)
printf("Nie ma liczby większej, lub równej zeru.\n");



return 0;
}
