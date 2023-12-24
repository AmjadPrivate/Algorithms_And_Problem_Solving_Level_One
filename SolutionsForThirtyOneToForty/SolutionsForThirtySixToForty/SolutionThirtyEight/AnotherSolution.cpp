#include <cmath>
#include <iostream>


using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime= 2};


float ReadPositiveNumber(string Message)
{ 
    int Number;


    do {
        
        cout << Message << endl;
        cin >> Number;

    }while (Number <= 0);


    return Number;
}


enPrimeNotPrime CheckPrime(int Number)
{

    int M = round(Number / 2);


    for(int Counter = 2; Counter <= M; Counter++)
    {
        if(Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;
    }


    return enPrimeNotPrime::Prime;


}


void PrintNumberType(int Number)
{
    

    switch (CheckPrime(Number)) 
    {
        case enPrimeNotPrime::Prime:
            cout << Number << " Is A Prime Number." << endl;
            break;
        case enPrimeNotPrime::NotPrime:
            cout << Number << " Is Not A Prime Number." << endl;
            break;
    }

}


int main()
{

    PrintNumberType(ReadPositiveNumber("Please Enter A Positive Number: "));


    return 0;
}