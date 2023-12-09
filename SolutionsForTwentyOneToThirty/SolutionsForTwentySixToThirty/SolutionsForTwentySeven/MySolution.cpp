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
    int Counter = 1;
    N++;
    cout << "Printed Range Using While Statement: \n";
    
    while (Counter < N)
    {
        N--;
        cout << N << endl;
    }


}

void PrintRangeFormNto1_UsingDoWhileStatement(int N)
{
    
    int Counter = 1;
    N++;

    cout << "Printed Range Using Do..While Statement: \n";

    do
    {
        N--;
        cout << N << endl;

    }while(N > Counter);

}

void PrintRangeFormNto1_UsingForStatement(int N)
{
    cout << "Printed Range Using For Statement: \n";

    for(int Counter = 1; N >= Counter; N--)
    {
        cout << N << endl;
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