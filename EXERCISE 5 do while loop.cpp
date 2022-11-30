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
    int i;
    int start_num,end_num;
    long sum = 0;
    start_num = 10;
    end_num = 15;
    i = start_num;
    
    do{
        sum+=(long)i;
        i++;
        
    }while(i<=end_num);
    
 cout << "The sum is: " << sum;
 cout << "\n\n";


    return 0;
}