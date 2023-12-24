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


float CalculateHoursPerDay(float Hours)
{
    return Hours / 24;
}

float CalculateHoursPerWeek(float Days)
{
    return Days / 7;
}

int main()
{

    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours: ");
    float NumberOfDays = CalculateHoursPerDay(NumberOfHours);
    float NumberOfWeeks = CalculateHoursPerWeek(NumberOfDays);



    cout << endl;
    cout << "Hours Equal " << NumberOfHours << endl;
    cout << "--------------------------------\n";
    cout << "Days Equal " << NumberOfDays << endl;
    cout << "Weeks Equal " << NumberOfWeeks << endl;




    return 0;
}