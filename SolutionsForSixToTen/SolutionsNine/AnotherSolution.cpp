#include <iostream>

using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Enter Number One: ";
    cin >> Num1;

    cout << "Enter Number Two: ";
    cin >> Num2;

    cout << "Enter Number Three: ";
    cin >> Num3;

}

int SumOf3Numbres (int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

void PrintResult(int Total)
{
    cout << "\n The Total Of Numbers Is " << Total << endl;
}


int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResult(SumOf3Numbres(Num1, Num2, Num3));
    
    return 0;
}