// Author:    Herbert Schildt
// File name: NestedIf.cpp 
// Purpose:   Generate a random number and let the user guess it.
//

#include <iostream>
// <cstdlib> is needed in order to use the rand().
// For older compilers, use <stdlib.h>
#include <stdlib.h> 
using namespace std;

int main()
{
/*
   Select wrongly indented lines and press Shift+Tab to indent to the left
*/
        int magic;  // magic number
        int guess;  // user's guess

    magic = rand(); // get a random number

            cout << "Enter your guess: ";
            cin >> guess;

    if(guess == magic) 
    // Notice the "==" operator, which compares two values.   
        cout << "** Right **";
    cout << "The magic number was: " << magic << endl;
    return 0;
}