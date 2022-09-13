#include <stdio.h>
#include <stdlib.h>

int main() {
  short int Number, Frontier;
  float FNum, Tpoint;

  // Short Int
  Number = 32767;
  Frontier = 65536;

  // Float
  FNum = 3.1234;
  Tpoint = 7.501234567;

  printf("Value of Number Variable is %d \n", Number);
  printf("Value of Frontier Variable is %d \n", Frontier);
  printf("Value of FNum Variable is %f \n", FNum);
  printf("Value of Tpoint Variable is %.2f", Tpoint); //ทศนิยม 2 ตำแหน่ง
  
  return 0;

}