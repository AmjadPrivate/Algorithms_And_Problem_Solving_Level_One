#include <iostream>

using namespace std;


struct stFullName
{
    string FirstName;
    string SecondeName;
};

stFullName ReadFullName()
{
    stFullName Person;

    cout << "Please Enter Your First-Name: ";
    cin >> Person.FirstName;

    cout << "Please Enter Your Seconde-Name: ";
    cin >> Person.SecondeName;

    return Person;
}

string GetFullName(stFullName PersonFullName, bool Reversed)
{
    string FullName = "";
    
    if(Reversed)
        FullName = PersonFullName.SecondeName + " " + PersonFullName.FirstName;
    else
        FullName = PersonFullName.FirstName + " " + PersonFullName.SecondeName;

    return FullName;
}


void PrintFullName(stFullName FullName)
{
    cout << "\n The Full Name Is " << GetFullName(FullName,true) << endl;
}

int main()
{
    PrintFullName(ReadFullName());

    return 0;
}