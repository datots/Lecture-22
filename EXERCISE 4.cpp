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
    int n,sum=0,i=1;
    cout<<"Enter the no. to check whether the number is perfect number or not "<<endl;
    cin >> n;
    while(i<n%%n<500){
        if(n%i==0)
        sum+=i;
        i++;
    }
    cout<<"sum="<<sum<<endl;
    if(sum==n){
        cout<<"The no. is perfect number"<<endl;
    }else{
        cout<<"Not a perfect number";
    }

    return 0;
}