#include <iostream>

using namespace std;

int ReadNumber()
{   
    int N;

    cout << "Please Enter N: " << endl;
    cin >> N;

    return N;
}

void PrintRangeFrom1toN_UsingWhileLoop(int N)
{
    int Counter = 0;

    cout << "Range Printed Using While Statement: \n"; 

    while(Counter < N)
    {
        Counter++;
        cout << Counter << endl;
    }
}

void PrintRangeFrom1toN_UsingDoWhileLoop(int N)
{

    int Counter = 0;

    cout << "Range Printed Using Do..While Statement: \n";

    do {
        
        Counter++;
        cout << Counter << endl;


    }while (Counter < N);


}

void PrintRangeFrom1toN_UsningForLopp(int N)
{

    cout << "Range Printed Using For Loop Statement: \n";

    for(int Counter = 1; Counter <= N; Counter++)
    {
        cout << Counter << endl;
    }

}


int main()
{
    int N = ReadNumber();

    PrintRangeFrom1toN_UsingWhileLoop(N);
    PrintRangeFrom1toN_UsingDoWhileLoop(N);
    PrintRangeFrom1toN_UsningForLopp(N);
    return 0;
}