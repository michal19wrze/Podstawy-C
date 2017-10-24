#include<stdio.h>
int main()
{int zmienna1 = 98;
  int a=7;
  int b=3;
  int c=5;
  int d=2;
  int e;
  double f;
  double g;

  printf("podaj a\n");
  scanf("%d",&a);
  printf("podaj b\n");
  scanf("%d",&b);
  printf("podaj c\n");
  scanf("%d",&c);
  printf("podaj d\n");
  scanf("%d",&d);

  e = a*b;
  f= b*(double)b/c;
  g= c-(double)d/b;

  int zmienna2;
  double zmienna3 = 7.5;
  char zmienna4 = 'a';

  zmienna2= zmienna1 *2;
  zmienna3= (double)zmienna1/3;

  printf("tekst %d tekst\n",zmienna2);
  printf("tekst %c tekst\n",zmienna4);
  printf("tekst %.1f tekst\n\n\n",zmienna3);
  printf("wynik AxB =  %d\n",e);
  printf("wynik BxB/C = %f\n",f);
  printf("wynik C-D/B = %f\n",g);
  printf("tekst %d tekst\n",zmienna1);

  if(a<=b){
    if(a<=c){
      if(a<=d){
        printf("najmniejsza : %d\n", a);
      }
    }
  }
  if(b<=a){
    if(b<=c){
      if(b<=d){
        printf("najmniejsza : %d\n", b);
      }
    }
  }  if(c<=b){
      if(c<=a){
        if(c<=d){
          printf("najmniejsza : %d\n", c);
        }
      }
    }  if(d<=b){
        if(d<=c){
          if(d<=a){
            printf("najmniejsza : %d\n", d);
          }
        }
      }
  return 0;
}
