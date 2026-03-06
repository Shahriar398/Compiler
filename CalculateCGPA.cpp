#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float english, math, physics, programming, cgpa;

    cout << "Enter grade point for English: ";
    cin >> english;

    cout << "Enter grade point for Math: ";
    cin >> math;

    cout << "Enter grade point for Physics: ";
    cin >> physics;

    cout << "Enter grade point for Programming: ";
    cin >> programming;

    cout << endl;

    cgpa = (english + math + physics + programming) / 4;

    cout << "CGPA: " << cgpa << endl;

    cout << endl;

    if (cgpa >= 3.75 && cgpa <= 4.00)
    {
         cout << "Performance: GOOD";
    }

    else if (cgpa >= 3.50 && cgpa <= 3.74)
    {
        cout << "Performance: SATISFACTORY";
    }

    else if (cgpa >= 3.00 && cgpa <= 3.49)
    {
        cout << "Performance: NEED TO IMPROVE";
    }

    else
    {
        cout << "Performance: POOR";
    }


    getch();
}

