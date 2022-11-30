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
  int arr[10],number,i;
  cout << "Enter the number: ";
  cin>>number;
  for(i=0;number>0;i++){
      
      arr[i] = number % 2;
      number = number / 2;
  }
  cout<<"Binary of "<<number<<" is=: ";
  for(i = i-1;i>=0;i--){
      cout<<arr[i];
  }
    return 0;
}