#include <iostream>

using namespace std;


int ReadMark()
{
    int Mark;

    do {
        cout << "Please Enter Your Mark 1 To 100: ";
        cin >> Mark;
    
    }while (Mark > 100 || Mark < 0);

    return Mark;
}


bool ReturnPassOrFail(int Mark)
{
    return Mark >= 50; 
}

void PrintPassOrFail(bool Mark)
{
    if(Mark)
        cout << "PASS:)" << endl;
    else
        cout << "FAIL:(" << endl;
}


int main ()
{
    PrintPassOrFail(ReturnPassOrFail(ReadMark()));
    return 0;
}