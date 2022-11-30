/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int n,c=1,limit;
    cout << "Enter number to print its table=";
    cin>>n;
    cout<<"Enter limit=";
    cin>>limit;
        while(c<=limit)
    {
       cout<<n<<" * "<<setw(2)<<c<<" = "<<setw(2)<<n*c<<endl;
       c++;
    }

getch();
    

    return 0;
}