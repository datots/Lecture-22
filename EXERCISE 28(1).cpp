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
    int sum = 0;
    
    for(int i=101;i<200;i++){
        if(i%9==0){
            cout << i <<" ";
            sum +=i;
        }
    }
    cout<<endl;
    cout<<"\nThe sum is: "<<sum<<endl;

    return 0;
}