#include <iostream>
#include <math.h>
using namespace std;

void Read_A_And_B(int& A, int& D)
{
    cout << "Please Enter A: ";
    cin >> A;

    cout << "PLease Enter D: ";
    cin >> D;

}

float CalculateRctangelAreaThroughDiagonal(int A, int D)
{

    return A * ( sqrt( pow(D, 2) - pow(A, 2) ) );

}


void PrintResult(int A, int D)
{

    cout << "\n The Area Of Rectangel Through Diagonal Equal " << CalculateRctangelAreaThroughDiagonal(A, D) << endl << endl;
    
}

int main()
{

    int A, D;
    Read_A_And_B(A, D);

    PrintResult(A, D);

    return 0;
}