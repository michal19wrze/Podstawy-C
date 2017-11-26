#include<stdio.h>
int n;
int k;
int funkcja(int zmienna1){
  if(zmienna1 < 1) return 1;
  else return funkcja(zmienna1-1)*n;

}
 int main() {
  printf("podaj n: \n");
  scanf("%d",&n);
  printf("podaj k: \n");
  scanf("%d",&k);


  printf("wynik: %d\n",funkcja(k));
  return 0;
}
