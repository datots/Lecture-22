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
    int j,num,sum=0;
    cout<<"Enter number of terms: ";
    cin>>num;
    cout<<"Even numbers are: ";
    j=1;
    do{
        cout<<2*j<<endl;
        sum+=2*j;
        j++;
    }while(j<=num);
    cout<<"The sum of numbers up to "<<num<<" terms is: "<<sum;

    return 0;
}