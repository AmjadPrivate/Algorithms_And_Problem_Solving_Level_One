#include <iostream>



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


float AddCharges(float BillValue)
{
    return BillValue * 1.1;
}


float AddSalesTax(float TotalAddCharges)
{
    return TotalAddCharges * 1.16;
}


void PrintTotalBill(float BillValue)
{

    float BillAfterAddCharges = AddCharges(BillValue);
    float BillAfterAddSales = AddSalesTax(BillAfterAddCharges); // This Is The Total Of Bill

    cout << "Total Bill Is: " << BillAfterAddSales << endl;

}

int main()
{

    float BillValue = ReadPositiveNumber("Please Enter Total Bill: ");

    PrintTotalBill(BillValue);

    return 0;
}