#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;


struct strTaskDuration
{
    int NumberOfDays,
    NumberOfHours,
    NumberOfMinutes,
    NumberOfSeconds;

};

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do {
    
        cout << Message << endl;
        cin >> Number;

    }
    while (Number <= 0);


    return Number;  
}


strTaskDuration SecondsToTaskDuration (int TotalOfSeconds)
{
    strTaskDuration TaskDuration;

    const int SecondsPerDay = 24 * 60 * 60;
    const short int SecondsPerHour = 60 * 60;
    const short int SecondsPerMinute = 60;

    int Remainder = 0;

    TaskDuration.NumberOfDays = floor(TotalOfSeconds / SecondsPerDay);
    Remainder = TotalOfSeconds % SecondsPerDay;

    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;

    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;

    TaskDuration.NumberOfSeconds = Remainder;


    return TaskDuration;
}


void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{

    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":" 
    << TaskDuration.NumberOfHours << ":"
    << TaskDuration.NumberOfMinutes << ":"
    << TaskDuration.NumberOfSeconds << "\n";
    cout << endl;

}

int main()
{

    int TotalOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds: ");


    PrintTaskDurationDetails(SecondsToTaskDuration(TotalOfSeconds));


    return 0;
}