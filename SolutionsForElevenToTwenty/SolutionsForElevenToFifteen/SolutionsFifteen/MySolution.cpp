#include <iostream>

using namespace std;


void Read_A_And_B(int& A, int& B)
{

    cout << "Enter A: " << endl;
    cin >> A;
    
    cout << "Enter B: " << endl;
    cin >> B;

}


int CalculateRectangleArea(int A, int B)
{
    return A * B;
}

void PrintRectangleArea(int A, int B)
{
    cout << "The Rectangle Area Equal: " << CalculateRectangleArea(A, B) << endl;
}


int main()
{

    int A, B;

    Read_A_And_B(A, B);

    PrintRectangleArea(A, B);

    return 0;
}