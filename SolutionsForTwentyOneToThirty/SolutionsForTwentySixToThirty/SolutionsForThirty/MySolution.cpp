#include <iostream>


using namespace std;

int ReadNumber()
{
    int Number;


    do
    {
        cout << "Please Enter Number To Get The Factorial \" The Number Should Be Positive \" : " << endl;
        cin >> Number;

    } while (Number < 0);
    

    return Number;
}



int GetFactorialOfNumber(int N) // You Can User This Fucntion AnyWere Just Sand Number, To Get The Factorial
{
    long long int  SumOfFactorial = 1;

    for(int Counter = 1; Counter <= N; N--)
    {
        SumOfFactorial = SumOfFactorial * N;
    }

    return SumOfFactorial;

}


void PrintResult(int Factorial, int N)
{
    cout << " \n The Factorial Of " << N << " Is " << Factorial << endl << endl;
}


int main()
{
    int N = ReadNumber();

    PrintResult(GetFactorialOfNumber(N), N);

   
    return 0;
}