#include <iostream>


using namespace std;


int ReadAge()
{
    short int Age;

    cout << "\nEnter Your Age: " << endl;
    cin >> Age;

    return Age;
}


int CheckAge()
{


    while(true)
    {
        int AgeValue = ReadAge();

        if(AgeValue <= 45 && AgeValue >= 18)
        {
            return AgeValue;
            break;
        }
        else  
        {
            cout << "\n Invalid Age :(" << endl;
            continue;
        }
    }


}


void PrintResult(int Age)
{
    cout << "\n" << Age << " Is Valid Age\n" << endl;

}


int main()
{
    
    PrintResult( CheckAge() );

    return 0;
}