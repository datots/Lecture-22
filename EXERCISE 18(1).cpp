/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int num,cube; 
    cout<<"Enter Number: ";
    cin >> num;
    
    for(int i = 1;i<=num;i++){
        
        cube = i*i*i;
        
    }
    cout<<cube;
    return 0;
}