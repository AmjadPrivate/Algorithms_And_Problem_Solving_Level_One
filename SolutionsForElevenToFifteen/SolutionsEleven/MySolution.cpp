#include <iostream>

using namespace std;

int ReadHowManyMarks() // Give You How Many Marks Do Have.
{
    short int HowManyMarks, Counter = 1;

    while (true) 
    {
        cout << "\nYOU HAVE THREE TIMES TO ENTER HOW MANY MARKS DO YOU ENTER PLEASE ENTER NUMBER BETWEEN 1 TO 7" << endl;
        
        cout << "How Many Marks Do You Have: " << endl;
        cin >> HowManyMarks;

        if(HowManyMarks >= 1 && HowManyMarks <= 7) // Between One And Seven.
        {
            return HowManyMarks;
            break;
        }
        else
        {
            if(Counter == 3)
            {
                return  0;
                break;
            }
            else 
            {
                Counter++;
                continue;
            }
        }
    }

}


int *ReadMarks(int Marks[], int NumbersOfMarks) // Read Marks.
{

for(int i = 0; i <= NumbersOfMarks - 1; i++)
{

    cout << "Please Enter Mark " << i + 1 << endl;
    cin >> Marks[i];

    if(Marks[i] > 100 || Marks[i] < 1)
    {
        cout << "Please Enter Number Between 1 And 100 " << endl;
        continue;

    }
    else
    {
        i++;
    }
    
}


    return Marks;
}

int SumOfMarks(int Marks[], int MarksNumbers) // Give Sum Of Marks.
{
    int SumOfMarks = 0;

    for(int i = 0; i <= MarksNumbers -1; i++)
    {
        SumOfMarks = Marks[0] + SumOfMarks;
    }

    return SumOfMarks;

}

float CalculateAverageOfMarks(int TotalOfMarks, int MarkNumbers) // Give Average Of Marks.
{
    return (float)TotalOfMarks / MarkNumbers;
}




int main()
{
    short int MarksNumber = ReadHowManyMarks();

    if(MarksNumber == 0)
    {
        cout << "Smoething Wrong, You Tryed Three Times Please Try Again In Another Time" << endl;
    }
    else
    {
        int Marks[MarksNumber];

        SumOfMarks(ReadMarks(Marks, MarksNumber), MarksNumber);

        

    }


    return 0;
}