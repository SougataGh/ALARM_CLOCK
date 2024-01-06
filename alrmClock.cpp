void alrmClock::setAlarm(int hr, int mn, int sc) {
    ahr = hr;
    amn = mn;
    asc = sc;
}
void alrmClock::displayClock() {
    while (true) {
        system("cls");
        cout << hrs << ":" << mns << ":" << scs;
        if (hrs == ahr && mns == amn && scs == asc) {
            Beep(1000, 100000); // when the time reaches alarm time one beep
                                // sound will occur
        }
        scs++;
        if (scs == 60) { // when sec reaches it's limit increase the minute &
                         // reset second to 0
            scs = 0;
            mns++;
            if (mns == 60) { // when min reaches it's limit increase the hour &
                             // reset minute to 0
                mns = 0;
                hrs++;
                if (hrs == 24) { // when hour reaches it's limit reset it to 0
                    hrs = 0;
                }
            }
        }
        Sleep(1000);
    }
}
