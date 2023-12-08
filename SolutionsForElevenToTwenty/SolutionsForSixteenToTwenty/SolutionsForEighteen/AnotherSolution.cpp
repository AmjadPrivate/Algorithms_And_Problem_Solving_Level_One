#include <iostream>
#include <math.h>

using namespace std;

float ReadRadious()
{
    float R;

    cout << "Please Enter Radious R: " << endl;
    cin >> R;


    return R;
} 

float CircleArea(float R)
{
    const float PI = 3.141592653589793238;
    

    float Area = pow(R , 2) * PI;

    return Area;
}

void PrintResult(float Area)
{
    cout << " \n Circle Area = " << Area << endl << endl;
}

int main()
{
    PrintResult(CircleArea(ReadRadious()));
    return 0;
}