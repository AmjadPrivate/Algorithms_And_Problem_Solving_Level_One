#include <iostream>

using namespace std;

float ReadTotalSales()
{
    float TotalSales;

    cout << "Please Enter Your Total Sales: " << endl;
    cin >> TotalSales;

    return TotalSales;
}

float GetCommisionPercentage(float TotalSales)
{
    if(TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 500000)
        return 0.03;
    else
      return 0.00;

}

float CalculateToatlCommision(float TotalSales)
{
    return GetCommisionPercentage(TotalSales) * TotalSales;
}

int main()
{
    float TotalSales = ReadTotalSales();

    cout << "Commision Percetnage: " << GetCommisionPercentage(TotalSales) << endl;

    cout << "Total Commision: " << CalculateToatlCommision(TotalSales) << endl;


    return 0;
}