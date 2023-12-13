#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please Enter A Number: " << endl;
    cin >> Number;

    return Number;
}


void PowerOf_2_3_4(int Number)
{
    int a, b, c;

    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number * Number * Number;

    cout << a << " " << b << " " << c << endl;
}


int main()
{

    PowerOf_2_3_4(ReadNumber());


    return 0;
}