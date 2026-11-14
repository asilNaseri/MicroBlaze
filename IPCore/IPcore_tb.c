#include "IPcore.h"

int main()
{
  uint8_t C0,C1,C2,C3,C4,C5,C6,C7,C8;

  srand((signed int)time(NULL));
  C0=rand()%256;
  C1=rand()%256;
  C2=rand()%256;
  C3=rand()%256;
  C4=rand()%256;
  C5=rand()%256;
  C6=rand()%256;
  C7=rand()%256;
  C8=rand()%256;


  uint32_t result = inv_divisor(C0,C1,C2,C3,C4,C5,C6,C7,C8);
  printf("Inverse divisor equals to = %u",result);
  return 0;
}
