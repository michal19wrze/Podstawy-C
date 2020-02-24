#include <stdio.h>

void decToBin(int);
int main(){
    int liczba;
    printf("Wprowadź liczbę (dec): ");
    scanf("%d", &liczba);
    printf("Twoja liczba (bin):");
  decToBin(liczba);
	return 0;}
void decToBin(int liczba){
    if (liczba == 0){
        return ;}
    decToBin(liczba/2);
    printf("%d",liczba%2);}
