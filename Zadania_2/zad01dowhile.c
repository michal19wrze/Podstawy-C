#include<stdio.h>
int main(){
  int a;
  int b;
printf("podaj pierwszą liczbę: \n");
scanf("%d",&a);
printf("podaj drugą liczbę: \n");
scanf("%d",&b);
printf("Liczby przedziału:\n");

int i=a;
do{
  printf("%d\n",i);
  i++;
}while(i<=b);


return 0;}
