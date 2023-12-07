#include <iostream>

using namespace std;

int *ReadNumbers(int Numbers[3])
{

    for(int i = 0; i <= 3 - 1; i++)
    {
        cout << "Please Enter Number " << i + 1 << endl;
        cin >> Numbers[i];
 
    }
    cout << "\n";

    return Numbers;
}


int CalculateSumOfNumbers(int NumbersOfArray[3])
{
    int SumOfNumbers = 0;

    for(int i = 0; i <= 3 - 1; i++)
    {
        SumOfNumbers = SumOfNumbers + NumbersOfArray[i];
    }

    return SumOfNumbers;   
}

void PrintTheSum(int Numbers[3], int SumOfNumbers)
{
    
   cout << "\n------------------------\n";
   for(int i = 0; i <= 3 - 1; i++)
   {
        if(i == 0)
            cout << Numbers[i] << endl;
        else
            cout << Numbers[i] << "+" << endl;
   } 
   cout << "------------------------\n";
   cout << "The Sum Of This Numbers  Equal: " << SumOfNumbers << endl;

}

int main()
{
    int Numbers[3];
    PrintTheSum(Numbers, CalculateSumOfNumbers(ReadNumbers(Numbers)));
    
    return 0;   
}