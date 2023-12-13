#include <iostream>

using namespace std;

int ReadNumberInRage(int From, int To)
{
    int Number;

    do
    {
        cout << "Please Enter A Grade Between " << From << "And " << To << endl;
        cin >> Number;
    }
    while(Number <= From || Number >= To);  


    return Number;

}

char GetGradeLetter(int Grade)
{
    if(Grade >=90)
        return 'A';
    else if (Grade >=80)
        return 'B';
    else if (Grade >=70)
        return 'C';
    else if (Grade >=60)
        return 'D';
    else if (Grade >=50)
        return 'E';
    else
        return 'F';

}

int main()
{

    cout << endl << "Result: " << GetGradeLetter(ReadNumberInRage(1, 100)) << endl;


    return 0;
}