#include <iostream>

using namespace std;

void ReadN(int& N)
{
    cout << "Enter N: " << endl;
    cin >> N;

}

int CalculateSumOfOddNumbers(int N)
{
    int SumOfOddNumbers = 0;

    for(int i = 1; i <= N; i++)
    {
        if(i % 2 != 0)
        {
            SumOfOddNumbers = SumOfOddNumbers + i; 
        }
    
    }


    return SumOfOddNumbers;
}


void PrintResult(int N)
{
    cout << "\nThe Sum Of Odd Numbers In This Number \"" << N << "\" Is " << CalculateSumOfOddNumbers(N) << "\n" << endl;
}

int main()
{
    int N;

    ReadN(N); // By Reference 

    PrintResult(N); // By Value
    return 0;
}