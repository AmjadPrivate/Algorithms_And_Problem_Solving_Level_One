#include <iostream>



using namespace std;


enum enDayOfWeek {Sat = 1, San = 2, Mon = 3, Tue = 4, Wed= 5, Thu = 6, Fri = 7};


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

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek) ReadNumberInRange("Please Enter Day Number Sat = 1, Sun = 2, Mon = 3, Tue = 4, Med = 5, Thu = 6, Fri = 7", 1, 7);
}


string GetDayOfWeek(enDayOfWeek Day)
{

    switch (Day) 
    {
    
    case enDayOfWeek::Sat:
        return "Saturday";
    case enDayOfWeek::San:
        return "Sunday";
    case enDayOfWeek::Mon:
        return "Monday";
    case enDayOfWeek::Tue:
        return "Tuesday";
    case enDayOfWeek::Wed:
        return "Wedensday";
    case enDayOfWeek::Thu:
        return "Thursday";
    case enDayOfWeek::Fri:
        return "Friday";
    default:
        return "Not A Valid Day";

    }


}


int main()
{

    cout << GetDayOfWeek(ReadDayOfWeek());

    return 0;
}