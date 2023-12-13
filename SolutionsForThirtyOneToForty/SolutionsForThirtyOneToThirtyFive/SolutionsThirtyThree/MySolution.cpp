#include <iostream>

using namespace std;

int ReadGrade()
{
    int Grade;

    cout << "Enter Your Grade: " << endl;
    cin >> Grade;



    return Grade;
}


char GetLetterGrades(int Grade)
{
    if(Grade >=90 && Grade <= 100)
        return 'A';
    else if (Grade >=80 && Grade <= 89)
        return 'B';
    else if (Grade >=70 && Grade <= 79)
        return 'C';
    else if (Grade >=60 && Grade <= 69)
        return 'D';
    else if (Grade >=50 && Grade <= 59)
        return 'E';
    else
        return 'F';
    
}


void PrintGradeLetter(char GradeLetter)
{
    cout << "\n Your Letter Grade Is: " << GradeLetter << endl;
}

int main()
{

    PrintGradeLetter(GetLetterGrades(ReadGrade()));


    return 0;
}