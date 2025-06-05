#include "IPcore.h"

uint32_t inv_divisor(uint8_t C0,uint8_t C1,uint8_t C2,uint8_t C3,uint8_t C4,uint8_t C5,uint8_t C6,uint8_t C7,uint8_t C8)
{


  #pragma HLS INTERFACE s_axilite port=C0 bundle=CTRL_BUS
  #pragma HLS INTERFACE s_axilite port=C1 bundle=CTRL_BUS
  #pragma HLS INTERFACE s_axilite port=C2 bundle=CTRL_BUS
  #pragma HLS INTERFACE s_axilite port=C3 bundle=CTRL_BUS
  #pragma HLS INTERFACE s_axilite port=C4 bundle=CTRL_BUS
  #pragma HLS INTERFACE s_axilite port=C5 bundle=CTRL_BUS
  #pragma HLS INTERFACE s_axilite port=C6 bundle=CTRL_BUS
  #pragma HLS INTERFACE s_axilite port=C7 bundle=CTRL_BUS
  #pragma HLS INTERFACE s_axilite port=C8 bundle=CTRL_BUS
  #pragma HLS INTERFACE s_axilite port=return bundle=CTRL_BUS


  uint32_t sum;
  sum = C0+C1+C2+C3+C4+C5+C6+C7+C8;

  if (sum == 0)
    return 0xFFFFFFFF;

  double result;
  result = (1.0/sum) * (1 << 16);


  return (uint32_t)round(result);
}
