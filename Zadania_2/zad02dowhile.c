#include<stdio.h>
int main(){
  int a;
  int b=1;
printf("podaj  liczbę: \n");
scanf("%d",&a);
printf("silnia:\n");

int i=1;
do{
  b*=i;
  i++;
}while(i<=a);
printf("%d\n",b);


return 0;}
