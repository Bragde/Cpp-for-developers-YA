#include <iostream>

using namespace std;

void hours_minutes()
{
    int totalMinutes, hours, minutes;

    cout << "Enter total minutes: ";
    cin >> totalMinutes;

    hours = totalMinutes / 60;
    minutes = totalMinutes - (hours * 60);

    cout << totalMinutes << " minutes equals " << hours << " hours and " << minutes << " minutes." << endl;
}