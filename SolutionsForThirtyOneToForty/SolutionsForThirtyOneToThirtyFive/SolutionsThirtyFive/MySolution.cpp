#include <iostream>

using namespace std;

void ReadMoney(int& Penny, int& Nickel, int& Dime, int& Quarter, int& Dollar)
{
    cout << "Enter Pennies: " << endl;
    cin >> Penny;

    cout << "Enter Nickels: " << endl;
    cin >> Nickel;

    cout << "Enter Dimes: " << endl;
    cin >> Dime;

    cout << "Enter Quarters: " << endl;
    cin >> Quarter;

    cout << "Enter Dollars: " << endl;
    cin >> Dollar;

    
}


int GetThePennies(int Penny, int Nickel, int Dime, int Quarter, int Dollar)
{
    return (Penny * 1) + (Nickel * 5) + (Dime * 10) + (Quarter * 25) + (Dollar * 100);
}


float GetTheDollars(int Pennies)
{
    return  (float)Pennies / 100;
}


int main()
{
    int Penny, Nickel, Dime, Quarter, Dollar;

    ReadMoney(Penny, Nickel, Dime, Quarter, Dollar);

    int Peenies = GetThePennies(Penny, Nickel, Dime, Quarter, Dollar);
    float DollarsResult = GetTheDollars(Peenies);


    cout << "\n Total Peenies Equal " << Peenies << endl;
    cout << "\n Total Dollars Equal " << DollarsResult << endl;
    


    return 0;
}