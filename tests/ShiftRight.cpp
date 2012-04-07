//
// File name: IfElse.cpp
// Purpose:   This program illustrates a simple if-else statement.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;

/*
   Select wrongly indented lines and press Tab to indent to the right
*/
cout << "Enter first number: ";
cin >> a;
cout << "Enter second number: ";
cin >> b;
    
    if(a < b) 
        cout << "First number is less than second.\n";
    else
        cout << "First number is greater than or equal to second.\n";
    
    return 0;
}