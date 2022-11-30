/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "\n\n Print a pattern like square with # character:\n";
    cout << "--------------------------------------------------\n";
    cout << " Input the number of characters for a side: ";
    
    cin>>size;
    for(int row = 1;row <= size;row++){
        for(int col = 1;col <= size;col++){
            cout <<"#";
        }
        cout<<endl;
    }
    return 0;
}