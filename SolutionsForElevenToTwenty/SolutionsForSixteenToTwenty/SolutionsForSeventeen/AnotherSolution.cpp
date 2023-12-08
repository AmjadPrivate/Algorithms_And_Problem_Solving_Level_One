#include <iostream>

using namespace std;

void ReadNumbers(float& A, float& H)
{

    cout << "Please Enter Triangle Base A: " << endl;
    cin >> A;

    cout << "Please Enter Triangle Height H: " << endl;
    cin >> H;

}

float TriangleArea(float A, float H)
{
    float Area = (A / 2) * H;

    return Area;
}


void PrintResult(float Area)
{

    cout << " \n Triangle Area = " << Area << endl << endl;

}


int main()
{

    float A, H;
    
    ReadNumbers(A, H);

    PrintResult(TriangleArea(A, H));

    return 0;
}