#include <iostream>


using namespace std;

enum enPassAndFail {Pass = 1, Fail = 2};

int ReadMark ()
{
    int Mark;

    cout << "Please Enter Your Mark: ";
    cin >> Mark;
    
    return Mark;
}

enPassAndFail CheckMark(int Mark) 
{
    if(Mark >= 50)
        return enPassAndFail::Pass;
    else
        return enPassAndFail::Fail;

}


void PrintResult (int Mark)
{
    if(CheckMark (Mark) == enPassAndFail::Pass)
        cout << "\n You Passed \n";
    else
        cout << "\n You Failed \n";
}


int main()
{

    PrintResult(ReadMark());


    return 0;
}
