/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


float sum(float a,float d,float n){
    
    float sum = (n/2) * (2 * a + (n - 1) * d);
    return sum;
}

int main()
{
    float a,d,n;
    cout << "Enter first number: ";
    cin>>a;
    cout << "Enter second number: ";
    cin>>d;
    cout << "Enter third number: ";
    cin>>n;
    
    cout<<sum(a,d,n);
    

    return 0;
}