#include <iostream>


using namespace std;

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{

    cout << "Please Enter Mark One: ";
    cin >> Mark1;
    
    cout << "Please Enter Mark Two: ";
    cin >> Mark2;

    cout << "Please Enter Mark Three: ";
    cin >> Mark3;


}


int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2+ Mark3;
}

float CalculateAverageOfMarks(int TotalMarks)
{
    return (float)TotalMarks / 3;
}

void PrintAverageOfMarks(float Average)
{
    cout << "\n Average Of Marks " << endl; 
}

int main()
{
    int Mark1, Mark2, Mark3;

    ReadMarks(Mark1, Mark2, Mark3);

    PrintAverageOfMarks (CalculateAverageOfMarks(SumOf3Marks(Mark1, Mark2,  Mark3)));

    return 0;
}