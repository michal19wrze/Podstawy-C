#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int wyswietlanie(char pole[3][3]){
//   0  1  2
// 0[ ][ ][ ]
// 1[ ][ ][ ]
// 2[ ][ ][ ]

printf(" [%c][%c][%c]\n",pole[0][0],pole[0][1],pole[0][2]);
printf(" [%c][%c][%c]\n",pole[1][0],pole[1][1],pole[1][2]);
printf(" [%c][%c][%c]\n",pole[2][0],pole[2][1],pole[2][2]);}

//ruch komputera
int funkcja(int a, int b, char pole[3][3]){
a=(int)(rand() %3);
b=(int)(rand() %3);
if(pole[a][b] !='x' && pole[a][b] != 'o'){
pole[a][b]='o';}
else return funkcja(a,b,pole);}





int main(){
  srand(time(NULL));
  int win=0;
  int remis=0;
  char pole[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
wyswietlanie(pole);
int i,j;
//ruch gracza
  while(win==0||remis!=72){
printf("Twój znak to 'x'\n");
printf("Podaj kolejno numer wiersza, następnie kolumny w jaką chcesz wstawić znak.\n");
scanf("%d",&i);
scanf("%d",&j);
i=i-1;
j=j-1;
if(pole[i][j]=='x' || pole[i][j]=='o'){
  printf("Nie mozna wstawic krzyzyka w to miejsce.\n");
  return 0;
}
else{
  pole[i][j]='x';
}

int a,b;


//   0  1  2
// 0[ ][ ][ ]
// 1[ ][ ][ ]
// 2[ ][ ][ ]

if((pole[0][0]==pole[0][1])&&(pole[0][0]==pole[0][2])&&(pole[0][0]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][0]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[1][0]==pole[1][1])&&(pole[1][0]==pole[1][2])&&(pole[1][0]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[1][0]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[2][0]==pole[2][1])&&(pole[2][0]==pole[2][2])&&(pole[2][0]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[2][0]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[0][0]==pole[1][1])&&(pole[0][0]==pole[2][2])&&(pole[0][0]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][0]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[0][2]==pole[1][1])&&(pole[0][2]==pole[2][0])&&(pole[0][2]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][2]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[0][0]==pole[1][0])&&(pole[0][0]==pole[2][0])&&(pole[0][0]!=' ')){
    win++;
    if(win==1){
    wyswietlanie(pole);
    printf("Wygrana dla %c!\n",pole[0][0]);
  return 0;}}
  else {
    remis++;
    if(remis==72){
      wyswietlanie(pole);
      printf("Remis\n");
  return 0;}}

if((pole[0][1]==pole[1][1])&&(pole[0][1]==pole[2][1])&&(pole[0][1]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][1]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[0][2]==pole[1][2])&&(pole[0][2]==pole[2][2])&&(pole[0][2]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][2]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

funkcja(a,b,pole);




if((pole[0][0]==pole[0][1])&&(pole[0][0]==pole[0][2])&&(pole[0][0]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][0]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[1][0]==pole[1][1])&&(pole[1][0]==pole[1][2])&&(pole[1][0]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[1][0]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[2][0]==pole[2][1])&&(pole[2][0]==pole[2][2])&&(pole[2][0]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[2][0]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[0][0]==pole[1][1])&&(pole[0][0]==pole[2][2])&&(pole[0][0]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][0]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[0][2]==pole[1][1])&&(pole[0][2]==pole[2][0])&&(pole[0][2]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][2]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[0][0]==pole[1][0])&&(pole[0][0]==pole[2][0])&&(pole[0][0]!=' ')){
    win++;
    if(win==1){
    wyswietlanie(pole);
    printf("Wygrana dla %c!\n",pole[0][0]);
  return 0;}}
  else {
    remis++;
    if(remis==72){
      wyswietlanie(pole);
      printf("Remis\n");
  return 0;}}

if((pole[0][1]==pole[1][1])&&(pole[0][1]==pole[2][1])&&(pole[0][1]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][1]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}

if((pole[0][2]==pole[1][2])&&(pole[0][2]==pole[2][2])&&(pole[0][2]!=' ')){
  win++;
  if(win==1){
  wyswietlanie(pole);
  printf("Wygrana dla %c!\n",pole[0][2]);
return 0;}}
else {
  remis++;
  if(remis==72){
    wyswietlanie(pole);
    printf("Remis\n");
return 0;}}





wyswietlanie(pole);}


  return 0;}
