#include <stdio.h>

int main(void) {
  int a = 3;
  int b = 5;
  float a2 = 6.8;
  float b2 = 2.3;
  int res1;
  int res2;
  float res3;
  float res4;

  res1 = a*b;
  res2 = (2*a)+(2*b);
  res3 = a2*b2;
  res4 = (2*a2)+(2*b2);

  printf("your area one is %d \n",res1);
  printf("your perimeter one is %d \n",res2);
  printf("your area two is %f \n",res3);
  printf("your perimeter two is %f \n",res4);

  printf("the difference is the use of the float variables");
  
  
  



  return 0;
}
