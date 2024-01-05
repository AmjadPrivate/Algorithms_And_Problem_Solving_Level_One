#include <iostream>
#include <stdlib.h>

using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;

    cout << Message << endl;
    cin >> Number;


    return Number;
}

bool Check_ATM_PassCode(int PassCode)
{
    if (PassCode == 1234)
        return true;
    else
        return false; 
}

void PrintResult(bool AfterCheck_ATM_PassCode)
{

    if (AfterCheck_ATM_PassCode == true) 
    {

        cout << " \n PasssCode Is True \n Your Balance Is 7500 \n" << endl;
        system("color 4F");

    }

    else
        cout << "\n Wrong PassCode" << endl;
        

}


int main()
{
    int PassCode = ReadNumber("Please Enter ATM PassCode? ");

    PrintResult(Check_ATM_PassCode(PassCode));
    

    return 0;
}