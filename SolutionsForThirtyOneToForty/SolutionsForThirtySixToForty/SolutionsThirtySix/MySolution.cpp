#include <iostream>


using namespace std;

void ReadNumber(int &Number, string Message)
{

    cout << "\n" << Message << endl;
    cin >> Number;

}


void PrintOperationTypes()
{

    cout << "\nChoose Operation Type According To This: " << endl;
    cout << "------------------------------------\n";
    cout << "\n"<< " Enter (+) For Addition " << endl;
    cout << " Enter (-) For Subtraction " << endl;
    cout << " Enter (*) For Multiplication " << endl;
    cout << " Enter (-) For Deviation " << endl;
    cout << "\n------------------------------------\n";

}


char GetOperationType()
{
    char OperationType;

    do
    {

        PrintOperationTypes();
        cin >> OperationType;

    } while ( !(OperationType == '+' || OperationType == '-' || OperationType == '*' || OperationType == '/') );
    




    return OperationType;
}


float CalculateNumbers(int NumberOne, int NumberTwo)
{
    ReadNumber(NumberOne, "Please Enter Number One: ");
    char OperationType = GetOperationType();
    ReadNumber(NumberTwo, "Please Enter Number Two: ");

    if (OperationType == '+')
        return NumberOne + NumberTwo;
    else if (OperationType == '-')
        return NumberOne - NumberTwo;
    else if (OperationType == '*')
        return NumberOne * NumberTwo;
    else 
        return NumberOne / NumberTwo;

}


void PrintResult (int NumberOne, int NumberTwo)
{
    float Result = CalculateNumbers(NumberOne, NumberTwo);

    cout << "\n Result: \n" << Result << endl;
}


int main()
{
    int NumberOne, NumberTwo;

    PrintResult(NumberOne, NumberTwo);

    return 0;
}

