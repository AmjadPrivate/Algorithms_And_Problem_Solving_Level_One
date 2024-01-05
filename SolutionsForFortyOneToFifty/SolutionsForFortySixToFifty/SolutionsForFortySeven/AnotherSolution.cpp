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

float TotalMonth(float LoanAmount, float MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment;
}


int main()
{   

    float LoanAmount = ReadPoisitveNumber("Please Enter Loan Amount? ");
    float MonthlyInstallment = ReadPoisitveNumber("Please Enter Monthly Installment? ");

    cout << "\n Total Months To Pay = " << TotalMonth(LoanAmount, MonthlyInstallment) << endl;
    cout << endl;



    return 0;
}