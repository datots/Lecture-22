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
    int i,j,rows;
    cout << "\n\n display the pattern like right angle triangle using an asterisk:\n";
    cout << "Happy Codings - C++ Programming Code Examples";
    cout << "---------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    
    cin >> rows;
    for(i = 1;i<=rows;i++){
        for(j=1;j<=i;j++)
            cout<<"*";
            cout<<endl;
    }

    return 0;
}