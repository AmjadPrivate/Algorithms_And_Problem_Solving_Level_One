#include <iostream>


using namespace std;

enum enPassFail {Pass = 1, Fail =2};

// Read Marks.
void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Enter Mark One: ";
    cin >> Mark1;

    cout << "Enter Mark Two: ";
    cin >> Mark2;

    cout << "Enter Mark Three: ";
    cin >> Mark3;
}

// Calculate Three Numbers And Give The Sum Of Them. 
int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;

}


float CalculateAverageOfMarks(int Mark1, int Mark2, int Mark3)
{

    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;

}


enPassFail CheckAverage (float Average)
{

    if(Average >= 50)
        return enPassFail::Pass;
    else  
        return enPassFail::Fail;

}


void PrintResult(float Average)
{
    cout << "\n The Average Is " << Average << endl;
    
    if(CheckAverage(Average) == enPassFail::Pass)
        cout << "\n Passed" << endl;
    else 
        cout << "\n Faild" << endl;

}

int main()
{
    int Mark1, Mark2, Mark3;

    ReadMarks(Mark1, Mark2, Mark3);
    
    PrintResult( CalculateAverageOfMarks(Mark1, Mark2, Mark3) );

    return 0;
}