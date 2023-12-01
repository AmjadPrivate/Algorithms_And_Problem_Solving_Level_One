#include <iostream>

using namespace std;



void ReadName(string &Name)
{
    cout << "Enter Your Name: ";
    cin >> Name;
}

void PrintName(string Name)
{
    cout << "Your Name Is: " << Name << endl;
}


int main()
{
    string Name;
    ReadName(Name);
    PrintName(Name);

return 0;
}