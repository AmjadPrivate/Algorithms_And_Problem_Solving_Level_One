#include <iostream>

using namespace std;

int ReadNumber(int &Number)
{
    cout << "Please Enter A Number: ";
    cin >> Number;

    return Number;
}


float CalculateHalfNumber(int Number)
{
    return  float(Number) / 2;
}

void PrintHalfNumber(int Number)
{
    cout << "Half Of " << Number << " Is " << CalculateHalfNumber(Number);
}


int main()
{
    int Number;

    PrintHalfNumber(ReadNumber(Number));
    
    return 0;
}