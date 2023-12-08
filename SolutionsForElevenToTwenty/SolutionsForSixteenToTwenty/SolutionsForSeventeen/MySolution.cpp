#include <iostream>

using namespace std;

void ReadNumbers(float& A, float& H)
{

    cout << "Please Enter Triangle Side A: " << endl;
    cin >> A;

    cout << "Please Enter Triangle Side H: " << endl;
    cin >> H;

}

float CalculateTriangleArea(float A, float H)
{
    float Area = ( A / 2 ) * H;

    return Area;
}


void PrintResult(float Area)
{
    cout << "\n Triangle Area Equal: " << Area << endl << endl;
}


int main()
{

    float A, H;

    ReadNumbers(A, H);

    PrintResult(CalculateTriangleArea(A, H));
    
    return 0;
}