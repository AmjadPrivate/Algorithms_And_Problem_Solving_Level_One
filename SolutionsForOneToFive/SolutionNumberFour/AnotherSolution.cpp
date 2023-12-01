#include <iostream>

using namespace std;

struct stInfo
{
    short int Age;
    bool HasDriverLicense;
};

stInfo ReadInfo ()
{
    stInfo Info;

    cout << "How Old Are You: ";
    cin >> Info.Age;
    
    cout << "Do You Driver License: ";
    cin >> Info.HasDriverLicense;
    
    return Info;
}

bool CheckInfo(stInfo Info)
{
    return (Info.Age >=21 && Info.HasDriverLicense == true);
}



void PrintResult (stInfo Info)
{
    if (CheckInfo(Info))
        cout << "\n Hired\n";
    else
        cout << "\n Rejected\n";
}


int main()
{
    PrintResult(ReadInfo());
    return 0;
}