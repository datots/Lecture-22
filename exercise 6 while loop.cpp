/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int Add(int x,int y)
{
    
    while(y!=0){
        unsigned carry = x&y;
        x = x^y;
        
        y=carry<<1;
    }
    return x;
}


int main(){
    cout << Add(15,32);
}