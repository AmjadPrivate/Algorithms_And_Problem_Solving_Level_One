#include <iostream>
#include <math.h>
using namespace std;

float ReadDiameter()
{
    float D;

    cout << "Please Enter Radious D: " << endl;
    cin >> D;

    return D;
}


float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;

    float Area = ( PI * pow(D, 2) ) / 4;

    return Area;
}

void PrintResult(float Area)
{
    cout << " \n Circle Area: " << Area << endl << endl; 
}

int main()
{
    PrintResult(CircleAreaByDiameter(ReadDiameter()));

    return 0;
}