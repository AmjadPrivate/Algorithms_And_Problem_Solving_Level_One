#include <iostream>

using namespace std;


int ReadNumbersOfMarks()
{
    short int NumberOfMarks, Counter = 1;

    do {
        cout << "\"YOU HAVE THREE TIMES TO ENTER HOW MANY MARKS DO YOU HAVE\" :)" << endl;
        cout << "How Many Marks Do Have: ";
        cin >> NumberOfMarks; 

        if(NumberOfMarks >= 1 && NumberOfMarks <= 7)
        {
            return NumberOfMarks;
            break;
        }
        else 
        {
            if(Counter == 3)
            {
                return 0; // Zero Mean Erorr.
                break;
            }
            else
             Counter++;
        }

    }while (true);



}


int *ReadMarks(int Marks[], int NumberOfMarks)
{

     for (int i = 0; i <= NumberOfMarks - 1;) 
     {

        cout << "Please Enter Mark " << i + 1 << endl;
        cin >> Marks[i];

        if(Marks[i] > 100 || Marks[i] < 0)
        {

            cout << "Please Enter Number Between 1 And 100 :)" << endl;
            continue;

        }
        else
        {
            i++;
        }

     }

    return Marks;
}




float CalculateAverageOfMarks(int Marks[], int NumberOfMarks) // Give You Result Of Average.
{

    short int Counter = 0;

    int Result = 0;

    while (Counter <= NumberOfMarks - 1) // Give Sum Of Marks
    {
        Result = Result + Marks[Counter];
        Counter++;
    }


    return (float)Result / NumberOfMarks;
}





void PrintAverage(float Average)
{
    cout << "\nThe Average Is " << Average << endl;
}


int main()
{
    short int ResultOfNumbersOfMarks = ReadNumbersOfMarks();


    if(ResultOfNumbersOfMarks == 0)
    {
        cout << "You Tryed Three Times Please Try Again In Another Time." << endl;
    }
    else
    {
        int Marks[ResultOfNumbersOfMarks];

        ReadMarks(Marks, ResultOfNumbersOfMarks);

        PrintAverage(CalculateAverageOfMarks(Marks, ResultOfNumbersOfMarks));
    }

    return 0;
}