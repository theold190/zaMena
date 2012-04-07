// Author:    Herbert Schildt
// File name: ~ftp/pub/class/cpluslus/Array1.cpp
// Purpose:   Read 10 integers into an array and then print
//	      them out

#include <iostream>
using namespace std;

/*
   Hard to see but there are number of trailing whitespaces. Select everything with Ctrl+A and press Space
*/
int main()
{
    int sample[10]; // this reserves 10 integer elements
    int t;
                            
    // load the array  
    for(t = 0; t < 10; t++)         
        sample[t] = t;   
    
    // display the array   
    for(t = 0; t < 10; ++t)   
        cout << sample[t] << ' ' ;
    
    return 0;
}
