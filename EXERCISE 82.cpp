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
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    
    if(num1==num2)
        cout<<num1<<" == "<<num2<<endl;
    if(num1 != num2)
        cout<<num1<<" != "<<num2<<endl;
    if(num1 < num2)
        cout<<num1<<" < "<<num2<<endl;
    if(num1 > num2)
        cout<<num1<<" > "<<num2<<endl;
    if(num1 <= num2)
        cout<<num1<<" <= "<<num2<<endl;
    if(num1 >= num2)
        cout<<num1<<" >= "<<num2<<endl;
    
    return 0;
}