#include <iostream>


using namespace std;

enum enDaysOfTheWeek {Saturday = 1, Sunday = 2, Monday = 3, Tuesday = 4, Wednesday = 5, Thursday = 6, Friday};


int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do {
    
        cout << Message << endl;
        cin >> Number;

    }
    while (Number <= 0 );


    return Number;  
}


string GetNameOfDay (int NumberOfDay)
{

    switch (NumberOfDay) 
    {
    
        case enDaysOfTheWeek::Saturday:
            return "Saturday";
        case enDaysOfTheWeek::Sunday:
            return "Sunday";
        case enDaysOfTheWeek::Monday:
            return "Monday";
        case enDaysOfTheWeek::Tuesday:
            return "Tuesday";
        case enDaysOfTheWeek::Wednesday:
            return "Wednesday";
        case enDaysOfTheWeek::Thursday:
            return "Thursday";
        case enDaysOfTheWeek::Friday:
            return "Friday";
    
    }

    return NULL;
}


void PrintNumberOfTheDay(string NameOfTheDay)
{
    cout << " \nThe Name Of The Day Is " << NameOfTheDay << endl;
}


int main()
{

    int NumberOfDay = ReadPositiveNumber("Please Enter The Number Of Day?");


    PrintNumberOfTheDay(GetNameOfDay(NumberOfDay));

    return 0;
}