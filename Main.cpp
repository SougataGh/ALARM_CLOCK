int main() {
    int hr, mn, sc;
    cout << "Enter the time in format HH : MM : SS ( 24 HOURS FORMAT )-\n";
    cin >> hr >> mn >> sc;
    alrmClock c1(hr, mn, sc);
    int ahr, amn, asc;
    cout << "Set the Alarm [HH : MM : SS] -\n";
    cin >> ahr >> amn >> asc;
    c1.setAlarm(ahr, amn, asc);
    c1.displayClock();
}
