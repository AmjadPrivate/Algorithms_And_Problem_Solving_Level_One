#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please Enter A Number: " << endl;
    cin >> Number;

    return Number;
}

int ReadPower()
{
    int M;

    cout << "Please Enter Power: " << endl;
    cin >> M;

    return M;
}


int PowerOfM(int Number, int M)
{
    if(M == 0)
    {
        // Any Number Powered To Zero Gives 1.
        return 1;   
    }

    int Sum = 1;

    for(int i = 1; i <= M; i++)
    {
        Sum = Sum * Number;
    }

    return Sum;
}

int main()
{
    int Result =  PowerOfM(ReadNumber(), ReadPower());

    cout <<"Result Is: " << Result << endl;

    return 0;
}