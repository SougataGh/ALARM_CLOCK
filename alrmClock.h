#include <iostream>
#include<conio.h>
#include <windows.h>
using namespace std;

class alrmClock {
    int hrs, mns, scs; // for current time or starting time
    int ahr, amn, asc; // for the alarm time
public:
    alrmClock(int,int,int); // setting the starting time by a parameterized constructor
    void setAlarm(int, int, int);
    void displayClock();
};
