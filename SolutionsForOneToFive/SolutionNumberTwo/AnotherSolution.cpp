#include <iostream>
#include <string>

using namespace std;

string ReadName(string &Name)
{ 
    cout << "Please Enter Your Name: ";
    getline(cin, Name);
    return Name;
}

void PrintName (string Name)
{
    cout << "Your Name Is: " << Name << endl;
}


int main()
{
    string Name;
    PrintName(ReadName(Name));

    return 0;
}