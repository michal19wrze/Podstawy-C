#include<stdio.h>
int funkcja(double kwota, int i){
double nominal[15] = {500,200,100,50,20,10,5,2,1,0.5,0.2,0.1,0.05,0.02,0.01};
if(kwota < 0.01)
return 0;
if(kwota/nominal[i] < 1)
return funkcja(kwota,i+1);
else
printf("<=====================>\n\n");
printf("    Nominał: %.2fzł\n",nominal[i]);
printf("    Ilosc: %d\n",(int)(kwota/nominal[i]));
printf("_______________________\n");
return funkcja(kwota -((int)(kwota/nominal[i])) * nominal[i], 0);}
int main(){
  double kwota1;
  printf("Podaj kwote :\n");
  scanf("%lf",&kwota1);
  funkcja(kwota1,0);
}
