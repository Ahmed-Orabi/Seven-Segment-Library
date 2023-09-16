#include "sevenseg.h"

sevenseg::sevenseg(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g ,uint8_t dp)
{
  pins[0] = a;
  pins[1] = b;
  pins[2] = c;
  pins[3] = d;
  pins[4] = e;
  pins[5] = f;
  pins[6] = g;
  pins[7] = dp;
}
void sevenseg::begin()
{
  for(byte i = 0;i<=7;i++)
  {
    pinMode(pins[i],OUTPUT);
  }
}
void sevenseg::showNum(uint8_t num)
{ 
  for(byte i = 0;i<=7;i++)
  {
   digitalWrite(pins[i],nums[num][i]);
  }
}
void sevenseg::serialNums(uint16_t DELAY)
{
  for(byte i = 0;i<=9;i++ )
  {
   for(byte j = 0;j<=7;j++)
   {
   digitalWrite(pins[j],nums[i][j]);
   }
  delay(DELAY);
  }
}







