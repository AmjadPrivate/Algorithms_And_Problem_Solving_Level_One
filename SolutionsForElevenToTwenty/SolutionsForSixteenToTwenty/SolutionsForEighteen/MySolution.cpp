#include <iostream>
#include <math.h>

using namespace std;


void ReadNumber(float& R)
{
    cout << "Please Enter R: " << endl;
    cin >> R;

}

float CircleArea(float R)
{
    const float PI = 3.141592653589793238;

    float Area = PI * pow(R, 2);

    return Area;

}

void PrintResult(float Area)
{
    cout << " \nCircle Area = " << Area << endl << endl;
}


int main()
{
    float R;
    ReadNumber(R);

    PrintResult( CircleArea(R) );

    return 0;
}