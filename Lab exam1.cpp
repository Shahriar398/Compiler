#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string input;
    cout << "Enter equation : ";
    cin >> input;
    cout << endl;

    int operatorcount = 0;

    for (char ch : input)
    {
        if(ch == '=' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            operatorcount++;
            cout << "operator " << operatorcount << " : " << ch << endl;
        }
    }

    cout << "Number of operators = " << operatorcount << endl;

    getch();
}
