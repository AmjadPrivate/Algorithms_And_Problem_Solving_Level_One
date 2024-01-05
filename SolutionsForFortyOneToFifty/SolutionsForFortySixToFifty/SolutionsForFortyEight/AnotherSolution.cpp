#include <iostream>

using namespace std;

float ReadPoisitveNumber(string Message)
{

    float Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    }
    while (Number <= 0);


    return Number;
}

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
    return LoanAmount / HowManyMonths;
}


int main()
{
    float LoanAmount = ReadPoisitveNumber("Please Enter Loan Amount? ");
    float HowManyMonths = ReadPoisitveNumber("How Many Months? ");

    cout << "Monthly Installment " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;
    cout << endl; 

    return 0;
}