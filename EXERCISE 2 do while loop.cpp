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
    int a,i=1;
    cout<<"Input: "<<endl;
    cin>>a;
    
    do{
        cout<<i<<" X "<<a<<" = "<<i*a<<" "<<endl;
        i++;
        
    }while(i<=10);
    return 0;
}