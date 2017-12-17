#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>


int main(int argc, char *argv[]) {
  srand(time(NULL));
  char tekst[20]=" ";

  printf("Wpisz nazwe pliku:\n");
  scanf("%s",tekst);
double x;
FILE * xd;
xd= fopen(tekst,"w+");
for(x=0.;x<=1;x=x+0.1){
  fprintf(xd,"%.1f ",x);
  fprintf(xd,"%.2f ",x*x);
  fprintf(xd,"%.1f ",(double) rand()/RAND_MAX*1.0-0.0);
  fprintf(xd,"%c\n",' ');
}
fclose(xd);
  return 0;}
