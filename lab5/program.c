#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int wyswietlanie(char pole[3][3]){
//   0  1  2
// 0[ ][ ][ ]
// 1[ ][ ][ ]
// 2[ ][ ][ ]
printf("   1 2 3\n");
printf(" 1[%c][%c][%c]\n",pole[0][0],pole[0][1],pole[0][2]);
printf(" 2[%c][%c][%c]\n",pole[1][0],pole[1][1],pole[1][2]);
printf(" 3[%c][%c][%c]\n",pole[2][0],pole[2][1],pole[2][2]);}

int main(){
  srand(time(NULL));

  char pole[3][3]={{0,0,0},{0,0,0},{0,0,0}};
wyswietlanie(pole);
int i,j;

  for(int i=1;i<=9;i++){
printf("Twój znak to 'x'\n");
printf("Podaj kolejno numer wiersza, następnie kolumny w jaką chcesz wstawić znak.\n");
scanf("%d",&i);
scanf("%d",&j);
i=i-1;
j=j-1;
pole[i][j]='x';
int a,b;


if(pole[a][b]==0){
 a=(int)(rand() % (3 - 0)) + 0;
 b=(int)(rand() % (3 - 0)) + 0;
pole[a][b]='o';}



wyswietlanie(pole);}


  return 0;}
