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
    int m,y,n=0,flag = 0;
    cout << "Enter the Number to check Prime: ";
    cin>>m;
    n=m/y;
    for(y=2;y<=n;y++){
        if(m%y==0){
            cout<<"Number is not Prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout << "Number is Prime."<<endl; 

    return 0;
}