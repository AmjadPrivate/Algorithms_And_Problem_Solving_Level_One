#include <iostream>

using namespace std;


int ReadMark()
{
    int Mark;

    cout << "Please Enter Your Mark: ";
    cin >> Mark;


    return Mark;
}


bool ReturnPassOrFail(int Mark)
{
    return Mark >= 50; 
}

void PrintPassOrFail(bool Mark)
{
    if(Mark)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;
}


int main ()
{
    PrintPassOrFail(ReturnPassOrFail(ReadMark()));
    return 0;
}