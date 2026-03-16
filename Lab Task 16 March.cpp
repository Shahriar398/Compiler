#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    char c;
    cout << "Write an expression: ";

    while(cin >> c){

        if(c=='+' || c=='-' || c=='*' || c=='/' || c=='=')
            cout << c << " : Operator" << endl;

        else if((c>='a' && c<='z') || (c>='A' && c<='Z'))
            cout << c << " : Identifier" << endl;

        else if(c>='0' && c<='9')
            cout << c << " : Digit" << endl;

        else
            cout << c << " : Invalid" << endl;
    }

    getch();
}
