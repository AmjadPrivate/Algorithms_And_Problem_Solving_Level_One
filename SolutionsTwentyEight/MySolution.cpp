#include <iostream>

using namespace std;

void ReadN(int& N)
{

    cout << "Enter N: ";
    cin >> N;

}


void PrintFromNToOne(int N)
{

    for (int i = 1; i <= N; N--)
    {
        cout << N  << endl;
        
    }
}

int main()
{
    int N;

    ReadN(N);

    PrintFromNToOne(N);

    return 0;
}