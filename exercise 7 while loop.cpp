/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
   unsigned dice[2];
   srand(time(0));
   while(dice[0]+dice[1]!=10){
       dice[0] = rand() % 6 + 1;
       dice[1] = rand() % 6 + 1;
       cout << "Rolled: " << dice[0] << " and " << dice[1] <<endl;
   }

    return 0;
}