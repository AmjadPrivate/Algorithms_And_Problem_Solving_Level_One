#include <iostream>

using namespace std;


int ReadNumber()
{

    int N;

    cout << "Please Enter N: ";
    cin >> N; 

    return N;
}

void PrintRangeFormNto1_UsingWhileStatement(int N)
{
    int Counter = N + 1;

    cout << "Printed Range Using While Statement: \n";
    
    while (Counter > 1)
    {
        Counter--;
        cout << Counter << endl;
    }


}

void PrintRangeFormNto1_UsingDoWhileStatement(int N)
{
    
    int Counter = N + 1;

    cout << "Printed Range Using Do..While Statement: \n";

    do
    {
        Counter--;
        cout << Counter << endl;

    }while(Counter > 1);

}

 
void PrintRangeFormNto1_UsingForStatement(int N)
{
    cout << "Printed Range Using For Statement: \n";

    for(int Counter = N; Counter >= 1; Counter--)
    {
        cout << Counter << endl;
    }

}

int main()
{
    int N = ReadNumber();

    PrintRangeFormNto1_UsingWhileStatement(N);
    PrintRangeFormNto1_UsingDoWhileStatement(N);
    PrintRangeFormNto1_UsingForStatement(N);
    return 0;
}