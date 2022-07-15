/*
David Gerardi
CS-210-T6564 Programming Languages 22EW6
Project One: Chada Tech Clock

*/
//#define _CRT_SECURE_NO_WARNINGS //no longer needed. Switched from localtime to localtime_s
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h> 
#include <ctime>
#include <conio.h>

#include "header.h"

using namespace std;

unsigned int h, m, s; //variables are used as hour/minute/second respectivly

const char* choiceArray[] = { "Add One Hour", "Add One Minute", "Add One Second", "Exit Program" }; //array of choices for menu


unsigned int getHour() {
	return h;
}

void setHour(unsigned int hour) {
	h = hour;
}

unsigned int getMinute() {
	return m;
}

void setMinute(unsigned int minute) {
	m = minute;
}

unsigned int getSecond() {
	return s;
}

void setSecond(unsigned int second) {
	s = second;
}

void localTime() {
	//memory safe way to get local system time
	time_t now = time(0);
	tm nowLocal;

	localtime_s(&nowLocal, &now);

	h = nowLocal.tm_hour;
	m = nowLocal.tm_min;
	s = nowLocal.tm_sec;
}

void updateClocks() {
	while (true) {
		displayClocks(h, m, s);
		printMenu(choiceArray, 4, 26);
		this_thread::sleep_for(chrono::seconds(1)); //sleeps for 1second
		addOneSecond();
		system("CLS"); //this clears the user input from screen, while not actually deleting/removing it. Minor bug

	}
}


int main() {

	localTime();

	//starts two simultanious threads, to display time and wait for input without pausing clock
	thread thread0(updateClocks);
	thread thread1(mainMenu);

	thread0.join();
	thread1.join();

	//thread thread1(printMenu, choiceArray, 4, 26);
	//thread1.join();


	return 0;
}
