#include <stdio.h>
#include <math.h>

float cDelta(float a , float b, float c);

int main(){

  float delta, x1, x2, a, b, c;

  puts("Inserisci la a, b e c della equazione.");
  scanf("%f%f%f", &a, &b, &c);

  delta = cDelta(a, b, c);

  if(delta < 0){
    puts("Non ci sono soluzioni sorry");
  }
  
  else{
    x1 = (-b - sqrt(delta)) / (a * 2);

    printf("X = %.3f\n", x1);
  }  
 
  if(delta > 0){
    x2 = (-b + sqrt(delta)) / (a * 2);
    printf("X2 = %.3f\n", x2);

  }
 
  return 0;
}

float cDelta(float a, float b, float c){
  float delta;

  //Formula per calcolare il delta 
  return (b * b) - (4 * a * c);
}


