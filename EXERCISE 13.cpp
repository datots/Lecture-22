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
    int i,j,n,sum=0,tsum;
    n=5;
    
    for(i=1;i<=n;i++){
        tsum=0;
        for(j=1;j<=i;j++){
            sum+=j;
            tsum=+j;
            cout<<j;
            if(j<i){
                cout<<"+";
            }
        }
        cout<<" = "<<tsum<<endl;
    }
    cout<<sum;

    return 0;
}