/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void dec_to_oct(int n){
    int octal[100];
    
    int i = 0;
    while(n!=0){
        octal[i] = n%8;
        n=n/8;
        i++;
    }
    
    for(int j = i - 1;j>=0;j--)
        cout<<octal[j];
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    
    dec_to_oct(n);

    return 0;
}