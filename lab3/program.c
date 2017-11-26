#include<stdio.h>
int dodawanie(int a, int b){
  return a+b;}


double dzielenie(int a, int b){
  return a/(double)b;
}
int mnozenie(int a, int b){
  return a*b;
}
int odejmowanie(int a, int b){
  return a-b;
}

int main(int argc, char const *argv[]){
int a, b, c;
while(c!=5){
printf("wybierz opcje:\n\n 1. Dodawanie \n 2. Odejmowanie \n 3. Mnożenie \n 4. Dzielenie\n 5. Wyjscie z programu\n");
scanf("%d",&c);


if(c==5) {return 0;}

printf("podaj 1 liczbę:\n");
scanf("%d",&a);
printf("podaj 2 liczbę:\n");
scanf("%d",&b);
if(c==1)printf("Wynik to: %d\n", dodawanie(a,b));
if(c==2)printf("Wynik to: %d\n", odejmowanie(a,b));
if(c==3)printf("Wynik to: %d\n", mnozenie(a,b));
if(c==4)printf("Wynik to: %f\n", dzielenie(a,b));


}



return 0;





}
