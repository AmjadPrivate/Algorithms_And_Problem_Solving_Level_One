#include <iostream>
// #include <system_error>


using namespace std;


float ReadPositiveNumber(string Message)
{
    float Number;

    do {

        cout << Message << endl;
        cin >> Number;

    }
    while (Number <= 0);




    return Number;
}

float CalculateRemainder(float CashPaid, float TotalBill)
{
    return CashPaid - TotalBill;
}


int main()
{
    float CashPaid = ReadPositiveNumber("Please Enter Total Cash Paid: ");
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill: ");

    cout << endl;
    cout << "Total Bill: " << TotalBill << endl;
    cout << "Total Cahs Paid: " << CashPaid << endl;

    cout << "*********************\n";
    cout << "Remainder Is " << CalculateRemainder(CashPaid, TotalBill) << endl;




    return 0;
}