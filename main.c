#include <stdio.h>
#include <math.h>

float cDelta(int a , int b, int c);
int controlli(int a, int b, int c);

int main(){

  int a, b, c, controlValue;
  float delta, x1, x2;

  puts("Inserisci la a, b e c della equazione.");
  scanf("%d%d%d", &a, &b, &c);

  controlValue = controlli(a, b, c);

  if(controlValue == 0){
     delta = cDelta(a, b, c);

     if(delta < 0){
       puts("L'equazione non ammette soluzioni");
     }

     else{
       x1 = (-b - sqrt(delta)) / (a * 2);
       printf("X = %.3f\n", x1);
     }

     if(delta > 0){
       x2 = (-b + sqrt(delta)) / (a * 2);
       printf("X2 = %.3f\n", x2);
     }
  }
  return 0;
}

float cDelta(int a, int b, int c){
   float delta;

   //Formula per calcolare il delta
   return (b * b) - (4 * a * c);
}

int controlli(int a, int b, int c){
  if (a==0 && b==0 && c==0){
     puts("L'equazione 0 = 0 ammette infinite soluzioni");
     return 1;
  }

  else if (a==0 && b==0){
     puts("L'equazione non ammette soluzioni");
     return 1;
  }

  else if (a==0){
     puts("L'equazione si riduce al primo grado");
     printf("Soluzione: %f\n", (float)-c / b);
     return 1;
  }

  return 0;
}
