#include <iostream>



using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{

    cout << "Enter Number One:" << endl;
    cin >> Num1;

    cout << "Enter Number Two: " << endl;
    cin >> Num2;


}



void SwapNumbers(int& Num1, int& Num2)
{
    int Temp;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;

}


void PrintNumbersBeforeSwap(int Num1, int Num2)
{

    cout << "\n Number One Before Swap Was: " << Num1 << endl;

    cout << "Number Two Before Swap Was: " << Num2 << endl; 


}


void PrintNumbersAfterSwap(int Num1, int Num2)
{

    cout << "\n Number One After Swap Is: " << Num1 << endl;

    cout << "Number Two After Swap Is: " << Num2 << endl; 


}




int main()
{
    int Num1, Num2;

    ReadNumbers(Num1, Num2);
    
    PrintNumbersBeforeSwap(Num1, Num2); // Print Numbers Before Swap.

    SwapNumbers(Num1, Num2);
    PrintNumbersAfterSwap(Num1, Num2);

    return 0;
}