#include <iostream>


using namespace std;

void ReadNumber(int& Num1, int& Num2)
{

    cout << "Please Enter Number One: " << endl;
    cin >> Num1;

    cout << "Please Enter Number One: " << endl;
    cin >> Num2;

}

int MaxOf2Numbers(int Num1, int Num2)
{
    if(Num1 > Num2)
        return Num1;
    else 
        return Num2;
}

void PrintResults(int Max)
{
    cout << "\n The Maximum Number Is: " << Max << endl;
}

int main()
{
    int Num1, Num2;

    ReadNumber(Num1, Num2);

    PrintResults(MaxOf2Numbers(Num1, Num2));


    return 0;
}