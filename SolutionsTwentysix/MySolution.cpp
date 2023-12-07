#include <iostream>

using namespace std;

void ReadN(int& N)
{
    cout << "Enter N: ";
    cin >> N;
}

void PrintFromOneToN(int N)
{
    cout << "\n";
    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }

}


int main()
{
    int N;

    ReadN(N);

    PrintFromOneToN(N);

    return 0;
}