#include <iostream>

using namespace std;

int ReadNumber(int &Number)
{
    cout << "Please Enter A Number To Check It Even Or Odd: ";
    cin >> Number;
    return Number;
}

string CheckTheNumber(int Number)
{
    if(Number % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
    
}

void PrintTheResultAfterCheck(int Number, string Result)
{
    cout << "This Number >> " << Number << " Is An " << Result << " Number." << endl;
}

int main()
{
    int Number;
    ReadNumber(Number);
    PrintTheResultAfterCheck(Number, CheckTheNumber(Number));
    return 0;
}