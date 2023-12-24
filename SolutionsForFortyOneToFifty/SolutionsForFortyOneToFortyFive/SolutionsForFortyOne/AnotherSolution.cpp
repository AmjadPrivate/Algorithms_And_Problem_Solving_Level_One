#include <iostream>

using namespace std;

float ReadPositiveNumber(string Message)
{
    int Number = 0;

    do {
    
        cout << Message << endl;
        cin >> Number;

    }
    while (Number <= 0);


    return Number;  
}


float HoursToDays(float NumberOfHours)
{
    return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
    return (float)NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
    return (float)NumberOfDays / 7;
}


int main()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter The Hours: ");
    float HoursPerDay = HoursToDays(NumberOfHours);
    float HoursPerWeek = HoursToWeeks(NumberOfHours);

    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << HoursPerDay << endl;
    cout << "Total Weeks = " << HoursPerWeek << endl;




    return 0;
}

