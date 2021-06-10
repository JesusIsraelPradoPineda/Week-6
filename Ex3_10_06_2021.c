#include "stdio.h"
char at[1000];
float x1,y1;

int main(void) {
  printf("ingresa el valor del alto y del ancho \n");
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%f %f",&x1,&y1);
  printf("el resultado de tu perimetro es %f ",(x1*2)+(y1*2)
  );
  return 0;
}
