#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please Enter A Number: " << endl;
    cin >> Number;

    return Number;
}


float CalculateHalfNumber(int Number)
{
    return (float) Number / 2;
}


void PrintNumber(int Number)
{
    string Result = "Half Of " + to_string(Number) + " Is " + to_string(CalculateHalfNumber(Number));
    
    cout << endl << Result << endl;
    cout << endl << "Half Of " << Number << " Is " << CalculateHalfNumber(Number) << endl;
}

int main()
{
    PrintNumber(ReadNumber());

    return 0;
}