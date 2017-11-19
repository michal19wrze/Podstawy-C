#include<stdio.h>
int main(){
  int a;
  int b;
printf("podaj pierwszą liczbę: \n");
scanf("%d",&a);
printf("podaj drugą liczbę: \n");
scanf("%d",&b);
printf("Liczby przedziału:\n");


for(int i=a;i<=b;i++)
{
  printf("%d\n",i);
}


return 0;}
