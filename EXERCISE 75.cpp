/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int bin_to_oct(long long);
int main()
{
    long long bin_num;

    cout << "Enter a binary number: ";
    cin >> bin_num;

    cout << bin_num << " in binary = " <<bin_to_oct(bin_num) << " in octal ";

    return 0;
}

int bin_to_oct(long long bin_num)
{
    int oct_num = 0, dec_num = 0, i = 0;

    while(bin_num != 0)
    {
        dec_num += (bin_num%10) * pow(2,i);
        ++i;
        bin_num/=10;
    }

    i = 1;

    while (dec_num != 0)
    {
        oct_num += (dec_num % 8) * i;
        dec_num /= 8;
        i *= 10;
    }

    return oct_num;
}