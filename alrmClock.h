#include <iostream>
#include<conio.h>
#include <windows.h>
using namespace std;

class alrmClock {
    int hrs, mns, scs; // for current time or starting time
    int ahr, amn, asc; // for the alarm time
public:
    alrmClock(
        int hr, int mn,
        int sc) // setting the starting time by a parameterized constructor
    {
        hrs = hr;
        mns = mn;
        scs = sc;
    }
    void setAlarm(int, int, int);
    void displayClock();
};
