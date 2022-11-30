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
    int num,i,k=9;
    int sum = 0;
    
    cout<<"Please enter a number: ";
    
    cin>>num;
    i=1;
    
    do{
        sum+=k;
        k=k*10+9;
        i++;
        
    }while(i<=num);
    cout<<"The sum of series= "<<sum;
    
    return 0;
}