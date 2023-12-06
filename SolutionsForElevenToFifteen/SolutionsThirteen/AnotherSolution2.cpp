#include <iostream>


using namespace std;


void ReadNumber(int& Num1, int& Num2, int& Num3)
{

    cout << "Please Enter Number One: ";
    cin >> Num1;

    cout << "Please Enter Number Two: ";
    cin >> Num2;

    cout << "Please Enter Number Three: ";
    cin >> Num3;

}

int CheckNumber(int Num1, int Num2, int Num3)
{

    if(Num1 > Num2 && Num1 > Num3)
        return Num1;

    else if(Num2 > Num1 && Num2 > Num3)
        return Num2;    

    else if(Num3 > Num1 && Num3 > Num2)
        return Num3;

    else 
        return 0; // The Equal Togther.
}


void PrintResult(int Num1, int Num2, int Num3)
{

    if(CheckNumber(Num1, Num2, Num3) == Num1)
        cout << " \n Number " << Num1 << " Bigest Than Number " << Num2 << " And " << "Number " << Num3 << endl;

    else if(CheckNumber(Num1, Num2, Num3) == Num2)
        cout << " \n Number " << Num2 << " Bigest Than Number " << Num1 << " And " << "Number " << Num3 << endl;

    if(CheckNumber(Num1, Num2, Num3) == Num3)
        cout << " \n Number " << Num3 << " Bigest Than Number " << Num1 << " And " << "Number " << Num2 << endl;

    else
        cout << " \n Number " << Num1 << " And Number " << Num2 << " And Number " << Num3 << " Are Equal Togther." << endl ;
    

}


int main()
{
    int Num1, Num2, Num3;  
    ReadNumber(Num1, Num2, Num3);


    PrintResult(Num1, Num2, Num3);

    return 0;
}