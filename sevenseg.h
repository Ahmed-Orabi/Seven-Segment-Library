/*
Coded by: Ahmed Orabi
this library for Seven segment one digit contains 
one constructor and two methods

Library Name: sevenseg
*/
#ifndef SEVENSEG_H
#define SEVENSEG_H
#include <Arduino.h>
class sevenseg{
//Pins of Seven Segment for One Digit :D

public:
sevenseg(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g ,uint8_t dp);

void begin();

void showNum(uint8_t num);
void serialNums(uint16_t delay);
private:
byte pins[8] = {};
////////////////////////////////////////
byte nums[10][8] = {
{1, 1, 1, 1, 1, 1, 0, 0}, // 0
{0, 1, 1, 0, 0, 0, 0, 0}, // 1
{1, 1, 0, 1, 1, 0, 1, 0}, // 2
{1, 1, 1, 1, 0, 0, 1, 0}, // 3
{0, 1, 1, 0, 0, 1, 1, 0}, // 4
{1, 0, 1, 1, 0, 1, 1, 0}, // 5
{1, 0, 1, 1, 1, 1, 1, 0}, // 6
{1, 1, 1, 0, 0, 0, 0, 0}, // 7
{1, 1, 1, 1, 1, 1, 1, 0}, // 8
{1, 1, 1, 1, 0, 1, 1, 0} // 9
};
}
#endif