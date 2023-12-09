#include <iostream>

using namespace std;

int ReadNumber()
{
    int N;

    cout << "Please Enter N: " << endl;
    cin >> N;

    return N;
}


void PrintOneUntilNumber(int N) // Number Mean "N"
{
    cout << "\n";
    for(int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}

int main()
{

    PrintOneUntilNumber(ReadNumber());

    return 0;
}