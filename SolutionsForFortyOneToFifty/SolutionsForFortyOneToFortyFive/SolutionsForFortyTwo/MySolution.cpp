#include <iostream>


using namespace std;

// Public Variabls
const short int Second = 1;
const short int SecondsMinute = 60; 
const short int SecondsPerHour =  SecondsMinute * 60;
const int SecondsPerDay = SecondsPerHour * 24;


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





int main()
{
    int Days = ReadPositiveNumber("Please Ente=r The Days: ");
    int Hours = ReadPositiveNumber("Please Enter The Hours: ") ;
    int Minutes = ReadPositiveNumber("Please Enter The Minutes: ");
    int Seconds = ReadPositiveNumber("Please Enter The Seconds: ");


    cout << "Task Duration In Seconds: " <<  (Seconds * Second) + (Minutes * SecondsMinute) + (Hours * SecondsPerHour) + (Days * SecondsPerDay);  

    return 0;
}