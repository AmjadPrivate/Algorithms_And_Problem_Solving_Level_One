#include <iostream>

/*
    Steps:
        -- Mtake Struce 
            -Inoto Strct
                -- Variable Name It Age >> to Take Age. >> Variable Type [short int]
                -- Variable Name It Driver Lineces >> To Make Sure He Have Driver Lineces. >> Variable Type [String]
                -- Make Variable Name It Check Data Of Driver Lineces >> To Make Sure The Input Is Valid.  >> Variable Type [enum] >> Into Enum {Yes = 1, No = 2, NotCorectAnswer = 3}
        -- Make Fuction To Read Age.
            -- Type Of FuFction Is >> bool >> The Function Return Zero Or One
        -- Make Fuction To Ask The User If He Have Driver Lineces Or Not.
            -- Type Of Function Is  >> Stringe
            -- This Fuction Work Into CheckReadDriverLineces
        -- Make Fuction Name It CheckReadDriverLineces 
            -- This Fuction Work To Make Sure The Input Is Valid.
            -- The Type Of This Function Is >> Enum 
            -- This Fuction Return 'Y' >> Yes And 'N' >> For No And 'E' >> For Error.
        -- Make Procedural Fuction To Print >> Rejected If The Result Of CheckReadDriverLineces == 'N'. Or Hired If CheckReadDriverLineces == 'Y' Or "You Tryed Three Times, Try Agian In Another Time"

*/ 
using namespace std;



struct stUserInfo
{
    short int Age;
    string License;
};

// This Fucntion Retrun A Boolian Value 
bool ReadUsersAge(short int& PersonAge)
{
    cout << "How Old Are You: ";
    cin >> PersonAge;
    return PersonAge >= 21; 
}

string ReadDriverLineces (stUserInfo &DriverLinecns)
{
    cout << "Do You Have Driver Lineces? ";
    cin >> DriverLinecns.License;
    return DriverLinecns.License;

}
//  This Will Return Y For Yes Or N For No Or E For Erorr.
// There Problem Here Fix It .
char CheckDriverLinces(stUserInfo DriverLincse)
{
    char FinleReturn; // It Will Return Chracters 'Y' For Yes And 'N' For No And 'E' For Erorr.

    short int Counter = 1;
    do
    {
        cout << "You Have Thrre Time Trys \"Enter Yes Or No\" Or \'Y\' Or \'N\'" << endl;
        string ResultOfReadDriverLinces = ReadDriverLineces(DriverLincse);

        bool IfNOResult = ResultOfReadDriverLinces[0] == 'N' || ResultOfReadDriverLinces[0] == 'n' || ResultOfReadDriverLinces == "No" || ResultOfReadDriverLinces == "NO" || ResultOfReadDriverLinces == "no";  
        bool IfYesResult = ResultOfReadDriverLinces[0] == 'Y' || ResultOfReadDriverLinces[0] == 'y' || ResultOfReadDriverLinces == "Yes" || ResultOfReadDriverLinces == "YES" || ResultOfReadDriverLinces == "yes";  

        if(IfYesResult == true || IfNOResult == true)
        {
            if(IfYesResult == true)
            {
                FinleReturn = 'Y';
            }
            else
            {
                FinleReturn = 'N';
            }
            break;
        }else if(Counter == 3)
        {
            FinleReturn = 'E'; // E For Erorr
            break;
        }
    
        Counter++; 

    }while(true);



    return FinleReturn;
}


void PrintHiredOrRejcted (stUserInfo &Person)
{
    bool ResultOfAge = ReadUsersAge(Person.Age);
    char ResultOfDriverLinces = CheckDriverLinces(Person);

    if(ResultOfAge == true && ResultOfDriverLinces == 'Y')
    {
        cout << "\nHired:)" << endl;
    }
    else if(ResultOfAge == false ||ResultOfDriverLinces != 'Y')
    {
        if(ResultOfDriverLinces == 'N')
            cout << "\nRejeced):" << endl;
        else
            cout << "\nYou Tryed Three Times, Try Agian In Another Time):" << endl;
    }

}


int main()
{
    stUserInfo Person;
    PrintHiredOrRejcted(Person);
    
    return 0;
}