/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


void convert(int num){
    char arr[100];
    int i = 0;
    while(num !=0){
        int temp = 0;
        temp = num % 16;
        if(temp < 10){
            arr[i] = temp + 48;
            i++;
        }else{
            arr[i] = temp + 55;
            i++;
        }
        num = num / 16;
    }
    for(int j = i-1;j>=0;j--)
    cout<<arr[j];
}
int main()
{
   int num;
   cin >> num;
   cout<<num<< " converted to hexadeciaml: ";
   convert(num);
   return 0;
}