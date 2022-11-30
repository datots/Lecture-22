/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int bin_to_dec(int n)
{
    int num = n;
    int dec_val = 0;
 
    
    int base = 1;
 
    int temp = num;
    while (temp) {
        int la_di = temp % 10;
        temp = temp / 10;
 
        dec_val += la_di * base;
 
        base = base * 2;
    }
 
    return dec_val;
}
 

int main()
{
    int num;
    cout<<"Enter binary number: ";
    cin>>num;
    cout << bin_to_dec(num) << endl;
}