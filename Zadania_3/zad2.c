#include<stdio.h>
int main (){
  int a ,b;
  printf("Podaj liczbę  [1/2] :\n");
  scanf("%d",&a);
  printf("Podaj liczbę  [2/2] :\n");
  scanf("%d",&b);
int i;
i=2;
int NWD;
NWD=1;
  while(i <= a && i <= b){
    if(a%i==0 && b%i==0){
  NWD=NWD*i;
}
  if(a%i==0){
  a=a/i;
}
  if(b%i==0){
  b=b/i;
  }
  if(a%i!=0 && b%i!=0){
    i++;
  }
}

printf("Największy wspólny dzielnik podanych liczb to :%d\n",NWD);





  return 0;
}
