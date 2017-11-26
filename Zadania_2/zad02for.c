#include<stdio.h>
int main(){
  int a;
  int b=1;
printf("podaj  liczbę: \n");
scanf("%d",&a);
printf("silnia:\n");


for(int i=1;i<=a;i++)
{
b*=i;
}
printf("%d\n",b);


return 0;}
