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


float sum(float a,float r,int n){
    
    float sum = (a * (1-pow(r,n))/(1-r));
    return sum;
}

int main()
{
    float a,r;
    int n;
    cout << "Enter first number: ";
    cin>>a;
    cout << "Enter second number: ";
    cin>>r;
    cout << "Enter third number: ";
    cin>>n;
    
    cout<<sum(a,r,n);
    

    return 0;
}