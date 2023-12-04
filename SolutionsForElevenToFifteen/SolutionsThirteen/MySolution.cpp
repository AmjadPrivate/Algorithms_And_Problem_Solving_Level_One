#include <iostream>

using namespace std;

int ReadNumbersOfIndexes()
{
    int Number;
    
    do
    {
        cout << "\n \" The Maximum Is 6\"  And \"The Minimum Is 3\" " << endl; // Just Advice "Becuse I Will Ask Him/Her Until Him/Her Die"

        cout << "Please Enter How Many Numbers Do You Want Them In The Array: "; // I Know My English It's Fucked-up "Do Not Comment :)"
        cin >> Number;

        if (Number < 3 || Number > 6)
            continue;
        else    
            break;
        

    } 
    while (true);
    


    return Number;
}


// NOTE: I Can Read Numbers With Void But I Will Read It With Function.
int *ReadNumbers(int arrNumbers[], int NumbersOfIndexes) // arrNumbers == Array Of Numbers.
{

    int Counter = 0;

    while (Counter <= NumbersOfIndexes - 1)
    {
        cout << "Please Enter Number " << Counter + 1 << endl;
        cin >> arrNumbers[Counter];

        if(arrNumbers[Counter] <= 0) // I Can't Take Number Less Than 1.
        {
            cout << "Enter Number Great Than Zero" << endl;
            continue;
        }   
        else
            Counter++;

    }
    



    return arrNumbers;
}




// This Function Return The Bigest Number In The Array.
int WhatIsTheBigestNumberInArray(int arrNumbers[], int NumbersOfIndexes)
{

    int BigestNumber = 0;
    int Counter = 0;
    for(int i = 0; i <= NumbersOfIndexes - 1;)
    {

            
        if(NumbersOfIndexes == 1)
        {
            BigestNumber = arrNumbers[i];
            break;
        }
        else
        {

            while (Counter <= NumbersOfIndexes - 1)

                    {
                        if( arrNumbers[i] > arrNumbers[ Counter + 1 ] )
                            BigestNumber = arrNumbers[i];
                        else
                            Counter++;
                    }
                    
                    if(BigestNumber >= 1)
                    {
                        return BigestNumber;
                        break;
                    }
                    else
                        i++;
        }

      
    }


}



void OrderOfNumbers(int arrNumbers[], int NumbersOfIndexes)
{
    NumbersOfIndexes + 1;
    cout << " \n Order Of Numbers " << endl;
    
    for(int i = 0; i <= NumbersOfIndexes - 1; i++)
    {
        NumbersOfIndexes - 1;
        cout << "Number " << i + 1 <<  WhatIsTheBigestNumberInArray(arrNumbers, NumbersOfIndexes) << endl;

    }
    
}

// void PrintResults()
// {



// }


int main()
{
    int ResultNumbersOfIndexes = ReadNumbersOfIndexes();
    int Numbers[ResultNumbersOfIndexes];

    ReadNumbers(Numbers, ResultNumbersOfIndexes);

    OrderOfNumbers(Numbers, ResultNumbersOfIndexes);

    return 0;
}  