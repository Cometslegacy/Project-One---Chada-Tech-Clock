#pragma once

#include <iostream>
#include <string>

#include "Header.h"

using namespace std;

void addOneHour();
void addOneMinute();
void addOneSecond();
void displayClocks(unsigned int h, unsigned int m, unsigned int s);
string formatTime12(unsigned int h, unsigned int m, unsigned int s);
string formatTime24(unsigned int h, unsigned int m, unsigned int s);
unsigned int getMenuChoice(unsigned int maxChoice);
void mainMenu();
void mainMenu();
string nCharString(size_t n, char c);
void printMenu(const char* strings[], unsigned int numStrings, unsigned char width);
string twoDigitString(unsigned int n);
unsigned int getHour();
void setHour(unsigned int hour);
unsigned int getMinute();
void setMinute(unsigned int minute);
unsigned int getSecond();
void setSecond(unsigned int second);
void addOneSecond();
void addOneMinute();
void addOneHour();
