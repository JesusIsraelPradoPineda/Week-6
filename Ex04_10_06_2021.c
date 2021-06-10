#include "stdio.h"
char at[1000];
int x1,y1;

int main(void) {
  printf("mete hora y minuto que quieras saber (ejemplo: 2:10 (2 horas 10 minutos)) \n");
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%d:%d",&x1,&y1);
  printf("tu metistes xd oka no, tu metiste %d:%d, y en minutos es %d",x1,y1,(x1*60)+y1);
  return 0;
}
