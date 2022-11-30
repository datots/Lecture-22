/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int solve(int n){
    int i;
    int sum = 0;
    cout<<"Odd numbers are: ";
    for(i = 1;i <= n;i++){
        if(i % 2 ==1){
            cout<<i<<", ";
            sum +=i;
        }
    }
    cout<<endl;
    return sum;
}


int main()
{
    int sum = solve( 25 );
   cout << "Sum is: " << sum;
}