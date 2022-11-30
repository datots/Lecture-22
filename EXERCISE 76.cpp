/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


int oct_to_dec(int oct_num);
int main()
{
    int oct_num;
    cout << "Enter an octal number: ";
    cin>>oct_num;
    cout<<oct_num<<" in octal = "<<oct_to_dec(oct_num)<<" in decimal";

    return 0;
}

int oct_to_dec(int oct_num){
    int dec_num = 0,i = 0,rem;
    while(oct_num != 0){
        
        rem = oct_num % 10;
        oct_num/=10;
        dec_num += rem * pow(8,i);
        
        i++;
    }
    return dec_num;
}