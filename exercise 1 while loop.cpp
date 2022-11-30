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
    int number,reminder,total = 0;
    cout<<"Enter numbers: ";
    cin>>number;
    
    while(number > 0){
    reminder = number % 10;
    number = number / 10;
    total = total + reminder;
    }
    
    cout<<total;
    return 0;
}