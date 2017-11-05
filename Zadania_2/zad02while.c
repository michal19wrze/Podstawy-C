#include<stdio.h>
int main(){
  int a;
  int b=1;
printf("podaj  liczbę: \n");
scanf("%d",&a);
printf("silnia:\n");

int i=1;
while(i<=a){
  i++;
  b*=i;
}
printf("%d\n",b);


return 0;}
