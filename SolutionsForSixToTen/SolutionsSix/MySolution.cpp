#include <iostream>

using namespace std;

struct stFullName
{
    string FirstName;
    string LastName;
};


stFullName ReadFullName()
{
    stFullName FullName;

    cout << "Enter First-Name: ";
    cin >> FullName.FirstName; // First Name.

    cout << "Enter Last-Name: ";
    cin >> FullName.LastName;

    return  FullName;
}

string MixUpName(stFullName FullName)
{
    return FullName.FirstName + " " + FullName.LastName; // Return Full Name With Space.
}

void PrintFullName(stFullName FullName)
{
    cout << "\nFull Name Is: " <<  MixUpName(FullName) << endl;
}

int main()
{
    PrintFullName(ReadFullName());
    return 0;
}