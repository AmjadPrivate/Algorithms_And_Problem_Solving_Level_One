#include <iostream>


using namespace std;


enum enMonthOfYear { 
    
    Jan = 1, Feb = 2, Mar = 3,
    Apr = 4, May = 5, Jun = 6, 
    Jul = 7, Aug = 8, Sep = 9,
    Oct = 10,Nov = 11, Dec = 12
    
};


int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;


    do {

        cout << Message << endl;
        cin >> Number;

    }
    while (Number < From || Number > To);


    return Number;
}

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear) ReadNumberInRange("Please Enter A Month [1 To 12] ", 1, 12);
}


string GetMonthOfYear(enMonthOfYear MonthNumber)
{

    switch (MonthNumber) 
    {
    
    case enMonthOfYear::Jan:
        return "Janaury";
    case enMonthOfYear::Feb:
        return "Febaury";
    case enMonthOfYear::Mar:
        return "March";
    case  enMonthOfYear::Apr:
        return "April";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::Jun:
        return "June";
    case enMonthOfYear::Jul:
        return "July";
    case enMonthOfYear::Aug:
        return "August";
    case enMonthOfYear::Sep:
        return "September";
    case enMonthOfYear::Oct:
        return "Octuber";
    case enMonthOfYear::Nov:
        return "November";
    case enMonthOfYear::Dec:
        return "December";
    default:
        return "Not A Vaild Month :(";
    }

}




int main()
{
    cout << "\n";
    cout << GetMonthOfYear(ReadMonthOfYear()) << "\n" << endl;


    return 0;
}