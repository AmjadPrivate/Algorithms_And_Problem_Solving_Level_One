#include <iostream>

using namespace std;

enum enCheckAge {Valid = 1, InValid = 2};

int ReadAge(int& Age)
{   
    cout << "Enter Your Age: ";
    cin >> Age;

    return Age;
}


enCheckAge CheckAge(int Age)
{

    if (Age >= 18 && Age <= 45)
    { 
        return enCheckAge::Valid;
    }
    else
        return enCheckAge::InValid;


}

void PrintResult(enCheckAge AfterCheckAge)
{

    if(AfterCheckAge == enCheckAge::Valid)
        cout << "\n Valid Age" << endl;
    else
        cout << "\n InValid Age" << endl;
        

}

int main()
{
    int Age;

    ReadAge(Age);

    PrintResult(CheckAge(Age));
    return 0;
}