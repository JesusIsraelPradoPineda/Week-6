#include <stdio.h>
char at[100];
float x1,x2,x3,x4;

int main(void) {
  printf("puedes darme como maximo 4 temps a medir \n");
  fgets(at, sizeof(at), stdin);
  sscanf(at, "%f %f %f %f \n", &x1,&x2,&x3,&x4);
  printf ("en faras es %f, %f, %f, %f respectivamente",((x1*(9/5))+32),((x2*(9/5))+32),((x3*(9/5))+32),((x4*(9/5))+32));
}
