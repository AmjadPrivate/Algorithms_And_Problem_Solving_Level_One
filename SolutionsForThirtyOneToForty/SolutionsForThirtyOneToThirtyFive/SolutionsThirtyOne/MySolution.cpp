#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
    int Number;

    cout << Message << endl;
    cin >> Number;

    return Number;
}


int Power(int Number, int Power)
{
    int Sum = 1;

    for(int Counter = 1; Counter <= Power; Counter++)
    {
        Sum = Sum * Number;
    }

    return Sum;

}

void PrintResult(int Number)
{
    
    cout << "\n" << Number <<" To The Power Of 2 Is " << Power(Number, 2) << endl; 
    cout << Number <<" To The Power Of 3 Is " << Power(Number, 3) << endl; 
    cout << Number <<" To The Power Of 4 Is " << Power(Number, 4) << endl; 
}

int main()
{
    int Number = ReadNumber("Please Enter A Number: ");

    PrintResult(Number);
 
    return 0;
}