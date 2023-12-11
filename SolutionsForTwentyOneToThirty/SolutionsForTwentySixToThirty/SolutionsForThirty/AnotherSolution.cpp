#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;

    cout << Message << endl;
    cin >> Number;

    return Number; 
}
              

int main()
{
    
    ReadPositiveNumber("Please Enter Positive Number: "); 

    return 0;
}