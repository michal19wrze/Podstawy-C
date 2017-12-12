#include <stdio.h>

int funkcja(int liczba){
  int i=0,tab[31];
  while(liczba){
    tab[i++]=liczba%2;
    liczba/=2;}
  for(int x=i-1;x>=0;x--)
    printf("%d",tab[x]);}

int main(){
  int liczba;
printf("podaj liczbę w systemie dziesiętnym:\n");
scanf("%d",&liczba);
printf("====================================\n\n");
printf("%d po zamianie na system binarny:\n",liczba);
  funkcja(liczba);
  printf("\n\n====================================\n");
  return 0;}
