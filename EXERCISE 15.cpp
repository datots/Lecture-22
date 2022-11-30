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
    int posnum,ctr,sum,max=0;
    int int_max;
    int min = int_max;
    int terval=-1;
    cout << "\n\n Input a positive integers to calculate some processes or -1 to terminate:\n";
    cout << "----------------------------------------------------------------------------\n";
    cout << " Input positive integer or " << terval << " to terminate: ";
    
    while(cin>>posnum&&posnum!=terval){
        
        if(posnum>0){
            
            ++ctr;
            sum+=posnum;
            if(max<posnum){
                max=posnum;
            }else if(min>posnum){
                min=posnum;
            }
        }else{
            cout << "error: input must be positive! if negative, the value will only be -1! try again..." << endl;
        }
        cout << " Input positive integer or " << terval << " to terminate: ";
    }
    cout << "\n Your input is for termination. Here is the result below: " << endl;
    cout << " Number of positive integers is: " << ctr << endl;
    
    if(ctr > 0){
        cout << " The maximum value is: " << max << endl;
        cout << " The minimum value is: " << min << endl;
        cout << fixed <<"setprecision(2)";
        cout << " The average is " << (double)sum / ctr << endl;
        
        
        
    }

    return 0;
}