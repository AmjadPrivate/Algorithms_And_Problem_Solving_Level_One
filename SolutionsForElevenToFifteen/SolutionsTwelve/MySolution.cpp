#include <iostream>
#include <string.h>

using namespace std;

void ReadNumbers(int& NumberOne, int& NumberTwo)
{

    cout << "Number One: ";
    cin >> NumberOne;
    
    cout << "Number Two: ";
    cin >> NumberTwo;

}


int BigNumber(int NumberOne, int NumberTwo) // This Fuction It Will Return The Bigest Number (If This Fuction Returned ZERO This Mean The Numbers Is Equal)
{

    if(NumberOne > NumberTwo)
        return NumberOne; 

    else if(NumberTwo > NumberOne)
        return NumberTwo;
        
    else 
        return 0;

}



string CheckNumbers(int BigNumber, int NumberOne, int NumberTwo)
{

    if(BigNumber == 0)
        return "Number " + to_string(NumberOne) + " Is Equal To " + to_string(NumberTwo);
    else
    {
        if(BigNumber == NumberOne)
            return "Number " + to_string(NumberOne) + " Bigest Than " + to_string(NumberTwo);
        else
            return "Number " + to_string(NumberTwo) + " Bigest Than " + to_string(NumberOne);
    }

}


void PrintTheBigestNumber(int NumberOne, int NumberTwo, int BigNumber)
{

   cout <<  "\n" << CheckNumbers(BigNumber, NumberOne, NumberTwo) << endl;

}


int main()
{
    int NumberOne, NumberTwo;

    ReadNumbers(NumberOne, NumberTwo);

    PrintTheBigestNumber(NumberOne, NumberTwo, BigNumber(NumberOne, NumberTwo) );

    return 0;
}