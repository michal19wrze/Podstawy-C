#include<stdio.h>
float kwota=0;
int funkcja(int zmienna1, double tab[15]){}
int main(){
  double tab[15] = {500,200,100,50,20,10,5,2,1,0.5,0.2,0.1,0.05,0.02,0.01};

  for(int i=0; i<15;i++){
  if((kwota%tab[i])==0) {
    printf("Nominały: %d\n",kwota/tab[i]);

  }
  printf("podaj kwote :\n");
  scanf("%d",&kwota);
}
return 0;}
