#include <sevenseg.h>
sevenseg myseg(2,3,4,5,6,7,8,9);
void setup() {
  // put your setup code here, to run once:
  myseg.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
myseg.showNum(6);
}
