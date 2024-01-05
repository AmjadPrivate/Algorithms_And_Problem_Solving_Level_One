#include <iostream>


using namespace std;

string ReadPinCode()
{
    string PinCode;

    cout << "Please Enter PIN Cond \n";
    cin >> PinCode;

    return PinCode;
}

bool Login() // This Function Will Return Tru, Or Will Ask The User Enter The PIN Code Again.
{
    string PinCode;

    do {
        PinCode = ReadPinCode();

        if(PinCode == "1234")
        {
            return 1; // This Will Exit The Function And Return True.
        }
        else
        {
            cout << "\n Wrong PIN Code \n";
            // system("color 4F");
        }
    
    }
    while (PinCode != "1234");

    return 0;
}



int main()
{

    if(Login())
    {
        // system("color 2F"); // Ture Screen Green.
        cout << " \n Your Balance Is 7500 \n";
    }


    return 0;
}