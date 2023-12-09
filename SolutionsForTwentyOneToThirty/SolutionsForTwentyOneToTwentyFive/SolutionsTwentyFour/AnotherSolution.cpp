#include <iostream>

using namespace std;

int ReadAge()
{
    int Age;
    
    cout << "Enter Your Age: " << endl;
    cin >> Age;

    return Age;
}


bool ValidateNumberInRange(int Number, int Form, int To)
{
    return ( Number >= Form && Number <= To);
}

void PrintResult(int Age)
{
    if( ValidateNumberInRange(Age, 18, 45) )
        cout << "\n " << Age << " Is A Valid Age :) \n" << endl;
    else
        cout << "\n " << Age << " Is An InValid Age :( \n" << endl;

}

int main()
{
    PrintResult(ReadAge());

    return 0;
}