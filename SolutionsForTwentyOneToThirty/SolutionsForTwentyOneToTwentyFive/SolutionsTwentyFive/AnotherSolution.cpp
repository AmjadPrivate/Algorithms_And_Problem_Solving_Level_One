#include <iostream>

using namespace std;

int ReadAge()
{
    int Age;
    
    cout << "Please Enter Age Between 18 And 45: " << endl;
    cin >> Age;

    return Age;
}


bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}


int ReadUntilAgeBetween(int From, int To)
{

    int Age = 0;

    do
    {
        Age = ReadAge();

    } while (!ValidateNumberInRange(Age, From, To));  // This Loop Work Until ValidateNumberInRange Is False 
    
    return Age;
}


void PrintResult(int Age)
{
    cout << " \n Your Age Is " << Age << endl;
}


int main()
{

    PrintResult(ReadUntilAgeBetween(18, 45));

    return 0;
}