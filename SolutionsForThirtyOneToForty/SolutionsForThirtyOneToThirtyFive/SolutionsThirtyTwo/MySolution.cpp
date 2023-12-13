#include <iostream>

using namespace std;

void ReadNumberAnd_M(int& Number, int& M)
{

    cout << "Please Enter A Number: " << endl;
    cin >> Number;

    cout << "Please Enter M: " << endl;
    cin >> M;


}

int Power (int Number, int M)
{
    int Sum = 1;

    if(M == 0)
        return Sum;
    else
    {

        for(int Counter = 1; Counter <= M; Counter++)
        {
            Sum = Sum * Number;
        }

        return Sum;
    }
    

}

int main()
{

    int Number, M;
    ReadNumberAnd_M(Number, M);

    cout << Power(Number, M) << endl;

    return 0;
}