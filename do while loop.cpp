/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numbers,i = 1,s = 0;
    cout<<"Enter numbers: ";
    cin >> numbers;
    
    do{
        s += i;
        i++;
    }while(i<=numbers);
    cout<<"Sum = "<<s;
    
    getch();

    return 0;
}