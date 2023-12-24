#include <iostream>
#include <string>


using namespace std;



float ReadTotalBill(string Message)
{
    float Bill = 0;

    cout << Message << endl;
    cin >> Bill;


    return Bill;
}


float ReadCashPaid(string Message)
{

    float CashPaid;

    cout << Message << endl;
    cin >> CashPaid;

    return CashPaid;
}


string Remainder()
{   
    float TotalBill = ReadTotalBill("Total Bill: ");
    float CashPaid = ReadCashPaid("Cash Paid: ");

    float Remainder = CashPaid - TotalBill;

    return "Remainder Is " + to_string(Remainder) ;
}


void PrintRemainder()
{

    cout << Remainder() << endl;

}


int main()
{

    PrintRemainder();

    return 0;
}