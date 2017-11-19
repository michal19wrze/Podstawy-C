#include<stdio.h>
int main(){
int a;
printf("Podaj liczbę do sprawdzenia:\n");
scanf("%d",&a);
int suma=0;
for(int i=1;i<a;i++)
{
  if(a%i==0)
  {
    suma=suma+i;
  }
}
if(suma==a||a==1)printf("Liczba jest doskonała\n");
else printf("Liczba nie jest doskonała\n");

  return 0;}
