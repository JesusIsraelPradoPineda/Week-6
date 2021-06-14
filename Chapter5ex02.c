#include <stdio.h>
char at[1000];
float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
const float pi = 3.1416;

int main(void) {
  printf("puedes darme como maximo 10 radios para medir el volumen de 10 esferas (si no necesitas eso, puedes poner lo demas como 0) \n");
  fgets(at, sizeof(at), stdin);
  sscanf(at, "%f %f %f %f %f %f %f %f %f %f\n", &x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10);
  printf ("el radio es %f u^3, %f u^3, %f u^3, %f u^3, %f u^3, %f u^3, %f u^3, %f u^3, %f u^3, %f u^3, respectivamente, donde u son unidades cubicas (puede ser cm, m, etc)", x1*x1*x1*pi*(0.75),x2*x2*x2*pi*(0.75),x3*x3*x3*pi*(0.75),x4*x4*x4*pi*(0.75),x5*x5*x5*pi*(0.75),x6*x6*x6*pi*(0.75),x7*x7*x7*pi*(0.75),x8*x8*x8*pi*(0.75),x9*x9*x9*pi*(0.75),x10*x10*x10*pi*(0.75));
}
