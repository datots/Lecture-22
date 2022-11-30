/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int character = 0;
    char ch='A';
    do{
        character=int(ch);
        cout << ch<<" ";
        character++;
        ch=char(character);
        
    }while(ch<='Z');
    getch();

    return 0;
}