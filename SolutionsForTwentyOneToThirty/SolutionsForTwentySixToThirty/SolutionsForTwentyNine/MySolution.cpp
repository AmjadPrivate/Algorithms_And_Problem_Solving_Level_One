#include<iostream>

using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};

int ReadNumber()
{
    int Number;
    
    cout << "Please Enter N: " << endl;
    cin >> Number;

    return Number;
}

enOddOrEven CheckOddOrEven(int Number)
{
    if(Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int SumEvenNumbersFrom1toN_UsingForStatement(int N)
{
    int Sum = 0;

    cout << "Sum Even Numbers Using For Loop Statement: \n";

    for(int Counter = 1; Counter <= N; Counter++)
    {
        if(CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
    }

    return Sum;
}

int SumEvenNumbersFrom1toN_UsingWhileStatement(int N)
{
    int Sum = 0;
    int Counter = 0;

    cout << "Sum Even Numbers Using While Statement: \n";

    while(Counter < N)
    {

        Counter++;
        if(CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }

    }   

    return Sum;
}


int SumEvenNumbersFrom1toN_UsingDoWhileStatement(int N)
{
    int Sum =0;
    int Counter = 0;

    cout << "Sum Even Numbers Using Do..While Statement: \n";

    do {

        Counter++;
        if(CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
        

    }while (Counter < N);


    return Sum;
}



int main()
{
    int N = ReadNumber();

    cout << SumEvenNumbersFrom1toN_UsingWhileStatement(N) << endl;
    cout << SumEvenNumbersFrom1toN_UsingForStatement(N) << endl;;
    cout << SumEvenNumbersFrom1toN_UsingDoWhileStatement(N) << endl;
    
    return 0;
}