
#include <iostream>


using namespace std;


struct strTaskDuration
{
    int NumberOfDays,
    NumberOfHours,
    NumberOfMinutes, 
    NumberOfSecond;
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


strTaskDuration ReadTaskDuration()
{

    strTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours: ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes: ");
    TaskDuration.NumberOfSecond = ReadPositiveNumber("Please Enter Number Of Seconds: ");

    return TaskDuration;

}


int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds+= TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds+= TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds+= TaskDuration.NumberOfSecond;

    return DurationInSeconds;
}


int main()
{
    int TotalOfSeconds = TaskDurationInSeconds(ReadTaskDuration());

    cout << "\n Task Duration In Seconds: " << TotalOfSeconds << endl;
    cout << endl;

    return 0;
}